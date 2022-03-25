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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutentificationWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *AutentificationWindow)
    {
        if (AutentificationWindow->objectName().isEmpty())
            AutentificationWindow->setObjectName(QString::fromUtf8("AutentificationWindow"));
        AutentificationWindow->resize(800, 600);
        action = new QAction(AutentificationWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        centralwidget = new QWidget(AutentificationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 60, 511, 351));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 90, 271, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 140, 271, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(120, 180, 151, 31));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 240, 131, 31));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 240, 131, 31));
        AutentificationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AutentificationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        AutentificationWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AutentificationWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AutentificationWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(AutentificationWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        AutentificationWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action);

        retranslateUi(AutentificationWindow);

        QMetaObject::connectSlotsByName(AutentificationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AutentificationWindow)
    {
        AutentificationWindow->setWindowTitle(QCoreApplication::translate("AutentificationWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("AutentificationWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#if QT_CONFIG(tooltip)
        action->setToolTip(QCoreApplication::translate("AutentificationWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("AutentificationWindow", "\320\220\321\203\321\202\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("AutentificationWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275   ", nullptr));
        label_2->setText(QCoreApplication::translate("AutentificationWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        checkBox->setText(QCoreApplication::translate("AutentificationWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214  \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AutentificationWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("AutentificationWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("AutentificationWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutentificationWindow: public Ui_AutentificationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTENTIFICATIONWINDOW_H
