#include "happybirthday.h"
#include "ui_happybirthday.h"

happyBirthday::happyBirthday(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::happyBirthday)
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint);

	setAttribute(Qt::WA_TranslucentBackground, true);

	//image.load("image\\font_happy");
	//image.load(path);

	QDesktopWidget* desktop = QApplication::desktop();
	move(desktop->width() / 2, desktop->height() - 150);

	desk_width = desktop->width();
	desk_height = desktop->height();

}

happyBirthday::~happyBirthday()
{
    delete ui;
}


void happyBirthday::paintEvent(QPaintEvent*){
	QPainter painter(this);
	resize(image.width(), image.height());
	painter.drawPixmap(0, 0, image.width(), image.height(), image);
}

void happyBirthday::timerEvent(QTimerEvent *event){

	if (event->timerId() == timeMove){
		move(pos().x() + 10, pos().y());
		if (path == "image\\font_happy" && pos().x() > desk_width){
			exit(0);
		}
	}
}

void happyBirthday::startShow(){
	
	image.load(path);
	move(0 - image.width(), desk_height / 2);
	timeMove = startTimer(50);
	show();
	update();
}