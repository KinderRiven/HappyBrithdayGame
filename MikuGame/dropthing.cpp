#include "dropthing.h"
#include "ui_dropthing.h"

dropThing::dropThing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dropThing)
{
    //ui->setupUi(this);
	
	//вўВи
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint);

	setAttribute(Qt::WA_TranslucentBackground, true);

	image.load("image\\yuanbao");
}


dropThing::~dropThing(){
	delete ui;
}

void dropThing::timerEvent(QTimerEvent *event){

	int y = pos().y();

	if (event->timerId() == timeid){
		move(pos().x(), y + 10);
	}

}

void dropThing::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	resize(image.width(), image.height());
	painter.drawPixmap(0, 0, image.width(), image.height(), image);
}

void dropThing::startDrop(int x, int y){
	show();
	timeid = startTimer(30);
	move(x, y);
}