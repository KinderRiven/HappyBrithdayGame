#include "mikugame.h"

MikuGame::MikuGame(QWidget *parent)
	: QMainWindow(parent)
{
	//ui.setupUi(this);


	setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

	setAttribute(Qt::WA_TranslucentBackground, true);

	mikuState = 1;
	loadImage(mikuState);

	//
	QDesktopWidget* desktop = QApplication::desktop();
	move(desktop->width() / 2, desktop->height() - 150);

	desk_width = desktop->width();
	desk_height = desktop->height();
	//
	moneyNumber = 20;
	allNumber = moneyNumber;
	score = 0;

	//
	timeMoney  = startTimer(500);
	moneyJudge = startTimer(20);

	//
	srand(unsigned(time(NULL)));

	//
	QSound::play("music\\music.wav");
}

MikuGame::~MikuGame()
{
	
}

void MikuGame::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	resize(imageMiku.width(), imageMiku.height());
	painter.drawPixmap(0, 0, imageMiku.width(), imageMiku.height(), imageMiku);
}

void MikuGame::keyPressEvent(QKeyEvent* k)
{
	int x = pos().x();
	int y = pos().y();

	if (k->key() == Qt::Key_Escape){
		exit(0);
	}

	if (k->key() == Qt::Key_Left){
		x -= 20;
		if (mikuState <= 3){
			mikuState += 1;
			if (mikuState > 3)
				mikuState -= 3;
		}
		else
			mikuState = 1;
	}
	if(k->key() == Qt::Key_Right){
		x += 20;
		if (mikuState >= 4){
			mikuState += 1;
			if (mikuState > 6)
				mikuState -= 3;
		}
		else
			mikuState = 4;
	}
	loadImage(mikuState);
	move(x, y);
}

void MikuGame::loadImage(int id){
	char s[3];
	s[0] = id + '0';
	s[1] = '\0';
	QString path = QString("image\\run\\") + QString(s);
	imageMiku.load(path);
	update();
}

void MikuGame::timerEvent(QTimerEvent *event){

	if (event->timerId() == timeMoney && moneyNumber){
		int x = rand() % desk_width;
		dropMoney[moneyNumber--].startDrop(x, -10);
	}

	if (event->timerId() == moneyJudge){
		
		//相交判断
		QRect mikuRect(QPoint(pos().x(), pos().y()),
			QPoint(pos().x() + width(), pos().y() + height()));

		for (int i = 1; i <= allNumber; i++)
			if(!dropMoney[i].isHidden()){

				QRect dropRect(QPoint(dropMoney[i].pos().x(), dropMoney[i].pos().y()),
					QPoint(dropMoney[i].pos().x() + dropMoney[i].width(),
							dropMoney[i].pos().y() + dropMoney[i].height()));
				//true 代表交
				if (mikuRect.intersects(dropRect)){
					dropMoney[i].hide();
					score++;
					if (score == allNumber / 2){
						happy.path = "image\\front_jk";
						happy.startShow();
					}
					if (score == allNumber){
						happy.path = "image\\font_happy";
						happy.startShow();
					}
				}
			}

		//
		for (int i = 1; i <= allNumber; i++){
			if (!dropMoney[i].isHidden() && dropMoney[i].pos().y() > desk_height + 50){
				int x = rand() % desk_width;
				dropMoney[i].move(x, -10);
			}
		}
	}


}