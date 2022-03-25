#include "hashtablewindow.h"
#include "ui_hashtablewindow.h"
#include <menuwindow.h>

HashTableWindow::HashTableWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HashTableWindow)
{
    ui->setupUi(this);
}

HashTableWindow::~HashTableWindow()
{
    delete ui;
}

void HashTableWindow::on_action_triggered()
{
    auto w = new MenuWindow();//объект главного окна
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();//показываем окно
    deleteLater();//прячем предыдущее окно
}

