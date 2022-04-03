/********************************************************************************
** Form generated from reading UI file 'autentificationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTENTIFICATIONWINDOW_H
#define UI_AUTENTIFICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutentificationWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AutentificationWindow)
    {
        if (AutentificationWindow->objectName().isEmpty())
            AutentificationWindow->setObjectName(QString::fromUtf8("AutentificationWindow"));
        AutentificationWindow->resize(800, 600);
        AutentificationWindow->setStyleSheet(QString::fromUtf8("background: #D7E1E9;"));
        centralwidget = new QWidget(AutentificationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(200, 130, 391, 331));
        groupBox_2->setStyleSheet(QString::fromUtf8("background: white;"));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 130, 271, 41));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 70, 271, 41));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 240, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background: #2300B0;\n"
"color: white;"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 240, 131, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background: #2300B0;\n"
"color: white;\n"
""));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 190, 151, 23));
        AutentificationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AutentificationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        AutentificationWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AutentificationWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AutentificationWindow->setStatusBar(statusbar);

        retranslateUi(AutentificationWindow);

        QMetaObject::connectSlotsByName(AutentificationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AutentificationWindow)
    {
        AutentificationWindow->setWindowTitle(QCoreApplication::translate("AutentificationWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AutentificationWindow", "\320\220\321\203\321\202\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("AutentificationWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AutentificationWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        checkBox->setText(QCoreApplication::translate("AutentificationWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutentificationWindow: public Ui_AutentificationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTENTIFICATIONWINDOW_H
