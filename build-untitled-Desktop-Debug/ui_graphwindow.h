/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName(QString::fromUtf8("GraphWindow"));
        GraphWindow->resize(800, 600);
        menubar = new QMenuBar(GraphWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        GraphWindow->setMenuBar(menubar);
        centralwidget = new QWidget(GraphWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        GraphWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GraphWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GraphWindow->setStatusBar(statusbar);

        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
