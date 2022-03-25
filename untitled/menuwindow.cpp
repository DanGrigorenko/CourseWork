#include "menuwindow.h"
#include "ui_menuwindow.h"
#include <autentificationwindow.h>
#include <QTime>
#include "graphwidget.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}




void MenuWindow::on_action_triggered()//при нажатии открывается окно авторизации
{
    auto w = new AutentificationWindow();//объект главного окна
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();//показываем окно
    deleteLater();//прячем предыдущее окно
}


void MenuWindow::on_pushButton_2_clicked()
{
    GraphWidget *widget = new GraphWidget;
    graph = new GraphWindow(this);
    graph->setCentralWidget(widget);
    graph->show();
    this->hide();
}


void MenuWindow::on_pushButton_3_clicked()
{
    list = new ListWindow(this);
    list->show();
    this->hide();
}


void MenuWindow::on_pushButton_4_clicked()
{
    hashTable = new HashTableWindow(this);
    hashTable->show();
    this->hide();
}


void MenuWindow::on_pushButton_clicked()
{
    sort = new SortWindow2(this);
    sort->show();
    this->hide();
}

