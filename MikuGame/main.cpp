#include "mikugame.h"
#include "dropthing.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MikuGame w;
	w.show();
	return a.exec();
}
