/********************************************************************************
** Form generated from reading UI file 'hashtablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HASHTABLEWINDOW_H
#define UI_HASHTABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HashTableWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *HashTableWindow)
    {
        if (HashTableWindow->objectName().isEmpty())
            HashTableWindow->setObjectName(QString::fromUtf8("HashTableWindow"));
        HashTableWindow->resize(800, 600);
        HashTableWindow->setStyleSheet(QString::fromUtf8("background: #D7E1E9;"));
        action = new QAction(HashTableWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        centralwidget = new QWidget(HashTableWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        HashTableWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HashTableWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        HashTableWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HashTableWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HashTableWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(HashTableWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        HashTableWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action);

        retranslateUi(HashTableWindow);

        QMetaObject::connectSlotsByName(HashTableWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HashTableWindow)
    {
        HashTableWindow->setWindowTitle(QCoreApplication::translate("HashTableWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("HashTableWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#if QT_CONFIG(tooltip)
        action->setToolTip(QCoreApplication::translate("HashTableWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("HashTableWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HashTableWindow: public Ui_HashTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HASHTABLEWINDOW_H
