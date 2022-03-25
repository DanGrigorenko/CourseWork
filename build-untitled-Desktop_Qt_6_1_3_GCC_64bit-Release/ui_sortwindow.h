/********************************************************************************
** Form generated from reading UI file 'sortwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWINDOW_H
#define UI_SORTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *label_2;
    QFrame *line;
    QLineEdit *lineEdit;
    QPushButton *pushButton_20;
    QPushButton *pushButton_16;
    QPushButton *pushButton_19;
    QLabel *label;
    QLabel *label_9;
    QPushButton *pushButton_17;
    QPushButton *pushButton_14;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_15;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QPushButton *pushButton_18;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SortWindow)
    {
        if (SortWindow->objectName().isEmpty())
            SortWindow->setObjectName(QString::fromUtf8("SortWindow"));
        SortWindow->resize(800, 600);
        action = new QAction(SortWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        centralwidget = new QWidget(SortWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 120, 41, 191));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(383, 380, 20, 111));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 430, 171, 25));
        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(290, 460, 81, 25));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(400, 20, 91, 41));
        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(200, 460, 81, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 120, 41, 191));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(340, 330, 201, 31));
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(200, 20, 91, 41));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(300, 20, 91, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 120, 41, 191));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 120, 41, 191));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(500, 20, 91, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 120, 41, 191));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(500, 120, 41, 191));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(550, 120, 41, 191));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(450, 120, 41, 191));
        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(200, 380, 71, 41));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(280, 380, 91, 41));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(410, 450, 91, 41));
        SortWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SortWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        SortWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SortWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SortWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(SortWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        SortWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action);

        retranslateUi(SortWindow);

        QMetaObject::connectSlotsByName(SortWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SortWindow)
    {
        SortWindow->setWindowTitle(QCoreApplication::translate("SortWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("SortWindow", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        lineEdit->setText(QString());
        pushButton_20->setText(QCoreApplication::translate("SortWindow", "\320\222\321\213\320\262\320\276\320\264", nullptr));
        pushButton_16->setText(QCoreApplication::translate("SortWindow", "INSERTION\n"
"SORT", nullptr));
        pushButton_19->setText(QCoreApplication::translate("SortWindow", "\320\227\320\260\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        label_9->setText(QString());
        pushButton_17->setText(QCoreApplication::translate("SortWindow", "BUBBLE\n"
"SORT", nullptr));
        pushButton_14->setText(QCoreApplication::translate("SortWindow", "SELECTION\n"
"SORT", nullptr));
        label_3->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        pushButton_15->setText(QCoreApplication::translate("SortWindow", " MERGE\n"
"SORT", nullptr));
        label_5->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("SortWindow", "TextLabel", nullptr));
        pushButton_18->setText(QString());
        pushButton_12->setText(QCoreApplication::translate("SortWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\265\n"
"\321\207\320\270\321\201\320\273\320\260", nullptr));
        pushButton_11->setText(QCoreApplication::translate("SortWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("SortWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortWindow: public Ui_SortWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWINDOW_H
