/********************************************************************************
** Form generated from reading UI file 'sortwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWINDOW2_H
#define UI_SORTWINDOW2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortWindow2
{
public:
    QAction *action;
    QAction *actionBUBBLE;
    QAction *actionSELECTION;
    QAction *actionINSERTION;
    QAction *actionMERGE;
    QAction *action_3;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_10;
    QFrame *line;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_8;
    QPushButton *pushButton_11;
    QLabel *label_9;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_11;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QLabel *label_12;
    QPushButton *pushButton_12;
    QPushButton *pushButton_19;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SortWindow2)
    {
        if (SortWindow2->objectName().isEmpty())
            SortWindow2->setObjectName(QString::fromUtf8("SortWindow2"));
        SortWindow2->resize(800, 600);
        SortWindow2->setStyleSheet(QString::fromUtf8("background: #D7E1E9;"));
        action = new QAction(SortWindow2);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/pkL_aLB4L_I.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        actionBUBBLE = new QAction(SortWindow2);
        actionBUBBLE->setObjectName(QString::fromUtf8("actionBUBBLE"));
        actionSELECTION = new QAction(SortWindow2);
        actionSELECTION->setObjectName(QString::fromUtf8("actionSELECTION"));
        actionINSERTION = new QAction(SortWindow2);
        actionINSERTION->setObjectName(QString::fromUtf8("actionINSERTION"));
        actionMERGE = new QAction(SortWindow2);
        actionMERGE->setObjectName(QString::fromUtf8("actionMERGE"));
        action_3 = new QAction(SortWindow2);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralwidget = new QWidget(SortWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 130, 41, 191));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(400, 390, 221, 31));
        label_10->setStyleSheet(QString::fromUtf8(" font-style: italic;"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(373, 390, 20, 81));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 130, 41, 191));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 130, 41, 191));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 130, 41, 191));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(440, 130, 41, 191));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 130, 41, 191));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(540, 130, 41, 191));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(480, 440, 101, 31));
        pushButton_11->setStyleSheet(QString::fromUtf8(" border: 1px solid green;"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(330, 340, 201, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 130, 41, 191));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 440, 171, 31));
        lineEdit->setStyleSheet(QString::fromUtf8(" border: 1px solid #F1F2F2;\n"
"color: grey;\n"
""));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(190, 40, 391, 41));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(480, 40, 101, 41));
        pushButton_15->setStyleSheet(QString::fromUtf8(" border: 1px solid green;"));
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(190, 40, 91, 41));
        pushButton_17->setStyleSheet(QString::fromUtf8("border: 1px solid green;\n"
""));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(280, 40, 101, 41));
        pushButton_14->setStyleSheet(QString::fromUtf8(" border: 1px solid green;"));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(380, 40, 101, 41));
        pushButton_16->setStyleSheet(QString::fromUtf8(" border: 1px solid green;"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(190, 380, 171, 41));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(270, 380, 91, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("  border: 1px solid green;"));
        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(190, 380, 81, 41));
        pushButton_19->setStyleSheet(QString::fromUtf8("  border: 1px solid green;"));
        SortWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SortWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        SortWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(SortWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SortWindow2->setStatusBar(statusbar);
        toolBar = new QToolBar(SortWindow2);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        SortWindow2->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(menu_2->menuAction());
        menu->addAction(action_3);
        menu_2->addAction(actionBUBBLE);
        menu_2->addAction(actionSELECTION);
        menu_2->addAction(actionINSERTION);
        menu_2->addAction(actionMERGE);
        toolBar->addAction(action);

        retranslateUi(SortWindow2);

        QMetaObject::connectSlotsByName(SortWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *SortWindow2)
    {
        SortWindow2->setWindowTitle(QCoreApplication::translate("SortWindow2", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("SortWindow2", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#if QT_CONFIG(tooltip)
        action->setToolTip(QCoreApplication::translate("SortWindow2", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBUBBLE->setText(QCoreApplication::translate("SortWindow2", "BUBBLE", nullptr));
        actionSELECTION->setText(QCoreApplication::translate("SortWindow2", "SELECTION", nullptr));
        actionINSERTION->setText(QCoreApplication::translate("SortWindow2", "INSERTION", nullptr));
        actionMERGE->setText(QCoreApplication::translate("SortWindow2", "SHAKER", nullptr));
#if QT_CONFIG(tooltip)
        actionMERGE->setToolTip(QCoreApplication::translate("SortWindow2", "SHAKER", nullptr));
#endif // QT_CONFIG(tooltip)
        action_3->setText(QCoreApplication::translate("SortWindow2", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("SortWindow2", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\265\321\200\320\265\321\201\321\202\320\276\320\275\320\276\320\262\320\276\320\272: 0", nullptr));
        label_4->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        pushButton_11->setText(QCoreApplication::translate("SortWindow2", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_9->setText(QString());
        label_2->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        lineEdit->setText(QString());
        label_11->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        pushButton_15->setText(QCoreApplication::translate("SortWindow2", " SHAKER\n"
"SORT", nullptr));
        pushButton_17->setText(QCoreApplication::translate("SortWindow2", "BUBBLE\n"
"SORT", nullptr));
        pushButton_14->setText(QCoreApplication::translate("SortWindow2", "SELECTION\n"
"SORT", nullptr));
        pushButton_16->setText(QCoreApplication::translate("SortWindow2", "INSERTION\n"
"SORT", nullptr));
        label_12->setText(QCoreApplication::translate("SortWindow2", "TextLabel", nullptr));
        pushButton_12->setText(QCoreApplication::translate("SortWindow2", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\265\n"
"\321\207\320\270\321\201\320\273\320\260", nullptr));
        pushButton_19->setText(QCoreApplication::translate("SortWindow2", "\320\227\320\260\320\274\320\265\320\275\320\260", nullptr));
        menu->setTitle(QCoreApplication::translate("SortWindow2", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_2->setTitle(QCoreApplication::translate("SortWindow2", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("SortWindow2", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortWindow2: public Ui_SortWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWINDOW2_H
