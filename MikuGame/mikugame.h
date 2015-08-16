#ifndef MIKUGAME_H
#define MIKUGAME_H

#include <QtWidgets/QMainWindow>
#include "ui_mikugame.h"
#include <ctime>
#include <cstdio>
#include <QPixmap>
#include <QKeyEvent>
#include <qpainter.h>
#include <qsound.h>
#include <QDesktopWidget>

#include "dropthing.h"
#include "happybirthday.h"

class MikuGame : public QMainWindow
{
	Q_OBJECT

public:
	MikuGame(QWidget *parent = 0);
	~MikuGame();
	void loadImage(int id);
protected:
	void paintEvent(QPaintEvent*);
	void keyPressEvent(QKeyEvent*K);
	void timerEvent(QTimerEvent *event);
private:
	Ui::MikuGameClass ui;
	//image
	QPixmap imageMiku;
	int mikuState;
	//
	int moneyNumber;
	int allNumber;
	//time
	int timeMoney;
	int moneyJudge;
	//
	dropThing dropMoney[128];
	happyBirthday happy;
	int desk_width;
	int desk_height;
	//
	int score;
};

#endif // MIKUGAME_H
