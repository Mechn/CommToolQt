#ifndef COMMTOOL_H
#define COMMTOOL_H

#include <QtGui/QMainWindow>
#include "ui_commtool.h"

class CommTool : public QMainWindow
{
	Q_OBJECT

public:
	CommTool(QWidget *parent = 0, Qt::WFlags flags = 0);
	~CommTool();

private:
	Ui::CommToolClass ui;
};

#endif // COMMTOOL_H
