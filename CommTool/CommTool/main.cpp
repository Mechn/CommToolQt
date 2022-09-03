#include "commtool.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CommTool w;
	w.show();
	return a.exec();
}
