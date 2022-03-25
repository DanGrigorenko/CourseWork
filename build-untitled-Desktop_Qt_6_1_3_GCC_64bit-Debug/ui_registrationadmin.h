/********************************************************************************
** Form generated from reading UI file 'registrationadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONADMIN_H
#define UI_REGISTRATIONADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
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

class Ui_RegistrationAdmin
{
public:
    QAction *active;
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
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *RegistrationAdmin)
    {
        if (RegistrationAdmin->objectName().isEmpty())
            RegistrationAdmin->setObjectName(QString::fromUtf8("RegistrationAdmin"));
        RegistrationAdmin->resize(800, 600);
        active = new QAction(RegistrationAdmin);
        active->setObjectName(QString::fromUtf8("active"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        active->setIcon(icon);
        centralwidget = new QWidget(RegistrationAdmin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 70, 511, 351));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 100, 271, 27));
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
        layoutWidget->setGeometry(QRect(120, 150, 271, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 230, 131, 31));
        RegistrationAdmin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistrationAdmin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        RegistrationAdmin->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistrationAdmin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RegistrationAdmin->setStatusBar(statusbar);
        toolBar = new QToolBar(RegistrationAdmin);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        RegistrationAdmin->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(active);

        retranslateUi(RegistrationAdmin);

        QMetaObject::connectSlotsByName(RegistrationAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *RegistrationAdmin)
    {
        RegistrationAdmin->setWindowTitle(QCoreApplication::translate("RegistrationAdmin", "MainWindow", nullptr));
        active->setText(QCoreApplication::translate("RegistrationAdmin", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegistrationAdmin", "\320\220\321\203\321\202\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("RegistrationAdmin", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275   ", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationAdmin", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistrationAdmin", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("RegistrationAdmin", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationAdmin: public Ui_RegistrationAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONADMIN_H
