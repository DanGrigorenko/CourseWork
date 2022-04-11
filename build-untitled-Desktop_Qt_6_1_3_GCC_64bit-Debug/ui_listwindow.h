/********************************************************************************
** Form generated from reading UI file 'listwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWINDOW_H
#define UI_LISTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWindow
{
public:
    QAction *action;
    QAction *action_4;
    QAction *action_5;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuCghdrf;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ListWindow)
    {
        if (ListWindow->objectName().isEmpty())
            ListWindow->setObjectName(QString::fromUtf8("ListWindow"));
        ListWindow->resize(800, 600);
        ListWindow->setStyleSheet(QString::fromUtf8("background: #D7E1E9;"));
        action = new QAction(ListWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/pkL_aLB4L_I.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_4 = new QAction(ListWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(ListWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        centralwidget = new QWidget(ListWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ListWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ListWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuCghdrf = new QMenu(menubar);
        menuCghdrf->setObjectName(QString::fromUtf8("menuCghdrf"));
        menu = new QMenu(menuCghdrf);
        menu->setObjectName(QString::fromUtf8("menu"));
        ListWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ListWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ListWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(ListWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ListWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuCghdrf->menuAction());
        menuCghdrf->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(action_4);
        menu->addAction(action_5);
        toolBar->addAction(action);

        retranslateUi(ListWindow);

        QMetaObject::connectSlotsByName(ListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ListWindow)
    {
        ListWindow->setWindowTitle(QCoreApplication::translate("ListWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("ListWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#if QT_CONFIG(tooltip)
        action->setToolTip(QCoreApplication::translate("ListWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_4->setText(QCoreApplication::translate("ListWindow", "\320\241\320\277\320\270\321\201\320\276\320\272", nullptr));
        action_5->setText(QCoreApplication::translate("ListWindow", "\320\241\321\202\320\265\320\272", nullptr));
        menuCghdrf->setTitle(QCoreApplication::translate("ListWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu->setTitle(QCoreApplication::translate("ListWindow", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("ListWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListWindow: public Ui_ListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWINDOW_H
