#ifndef HAPPYBIRTHDAY_H
#define HAPPYBIRTHDAY_H

#include <QWidget>
#include <qpainter.h>
#include <QDesktopWidget>

namespace Ui {
class happyBirthday;
}

class happyBirthday : public QWidget
{
    Q_OBJECT

public:
    explicit happyBirthday(QWidget *parent = 0);
	void startShow();
    ~happyBirthday();
	QString path;
protected:
	void paintEvent(QPaintEvent*);
	void timerEvent(QTimerEvent *event);
private:
    Ui::happyBirthday *ui;
	QPixmap image;
	int desk_width;
	int desk_height;
	int timeMove;
};

#endif // HAPPYBIRTHDAY_H
