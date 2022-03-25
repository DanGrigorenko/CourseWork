#include "listwindow.h"
#include "ui_listwindow.h"
#include <menuwindow.h>
#include <QComboBox>

ListWindow::ListWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ListWindow)
{
    ui->setupUi(this);

}

ListWindow::~ListWindow()
{
    delete ui;
}

void ListWindow::on_action_triggered()
{
    auto w = new MenuWindow();//объект главного окна
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();//показываем окно
    deleteLater();//прячем предыдущее окно
}

