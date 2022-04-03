/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName(QString::fromUtf8("RegistrationWindow"));
        RegistrationWindow->resize(800, 600);
        RegistrationWindow->setStyleSheet(QString::fromUtf8("background: #D7E1E9;"));
        action = new QAction(RegistrationWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/pkL_aLB4L_I.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        centralwidget = new QWidget(RegistrationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(210, 100, 391, 331));
        groupBox_2->setStyleSheet(QString::fromUtf8("background: white;\n"
""));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 240, 271, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background: #2300B0;\n"
"color: white;"));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 180, 271, 41));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 120, 271, 41));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 60, 271, 41));
        RegistrationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistrationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        RegistrationWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistrationWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RegistrationWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(RegistrationWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        RegistrationWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action);

        retranslateUi(RegistrationWindow);

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("RegistrationWindow", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegistrationWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \321\203\321\207\321\221\321\202\320\275\320\276\320\271 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistrationWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
