/********************************************************************************
** Form generated from reading UI file 'commtool.ui'
**
** Created: Sat Aug 13 18:47:28 2022
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMTOOL_H
#define UI_COMMTOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommToolClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CommToolClass)
    {
        if (CommToolClass->objectName().isEmpty())
            CommToolClass->setObjectName(QString::fromUtf8("CommToolClass"));
        CommToolClass->resize(600, 400);
        menuBar = new QMenuBar(CommToolClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CommToolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CommToolClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CommToolClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CommToolClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CommToolClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CommToolClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CommToolClass->setStatusBar(statusBar);

        retranslateUi(CommToolClass);

        QMetaObject::connectSlotsByName(CommToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *CommToolClass)
    {
        CommToolClass->setWindowTitle(QApplication::translate("CommToolClass", "CommTool", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CommToolClass: public Ui_CommToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMTOOL_H
