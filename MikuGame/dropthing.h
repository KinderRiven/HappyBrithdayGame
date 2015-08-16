#ifndef DROPTHING_H
#define DROPTHING_H

#include <QWidget>
#include <QtWidgets/QMainWindow>
#include <ctime>
#include <cstdio>
#include <QPixmap>
#include <QKeyEvent>
#include <qpainter.h>
#include <QDesktopWidget>

namespace Ui {
class dropThing;
}

class dropThing : public QWidget
{
    Q_OBJECT

public:
    explicit dropThing(QWidget *parent = 0);
    ~dropThing();
	void startDrop(int x, int y);
protected:
	void paintEvent(QPaintEvent*);
	void timerEvent(QTimerEvent *event);
private:
    Ui::dropThing *ui;
	QPixmap image;
	int timeid;
};

#endif // DROPTHING_H
