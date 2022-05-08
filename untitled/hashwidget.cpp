#include "hashwidget.h"
#include "nodeforhash.h"
#include <QMessageBox>
#include <math.h>
#include <QKeyEvent>
#include <QRandomGenerator>
#include <QPainter>
#include <ctime>
#include <QPushButton>
#include <QLabel>
#include <QTimer>
#include <QEventLoop>
#include <algorithm>
#include <QGraphicsColorizeEffect>

HashWidget::HashWidget(QWidget *parent)
    : QGraphicsView(parent)
 {
    connect(CreatButton,SIGNAL(clicked()),this, SLOT(CreateButtonClicked()));
    connect(InsertButton,SIGNAL(clicked()),this, SLOT(InsertButtonClicked()));
    connect(SearchButton,SIGNAL(clicked()),this, SLOT(SearchButtonClicked()));
    connect(RemoveButton,SIGNAL(clicked()),this, SLOT(RemoveButtonClicked()));
    connect(MenuuButton,SIGNAL(clicked()),this, SLOT(MenuButtonClicked()));
    connect(CreateGoButton,SIGNAL(clicked()),this, SLOT(CreateGoButtonClicked()));
    connect(SearchGoButton,SIGNAL(clicked()),this, SLOT(SearchGoButtonClicked()));
    connect(InsertGoButton,SIGNAL(clicked()),this, SLOT(InsertGoButtonClicked()));
    connect(RemoveGoButton,SIGNAL(clicked()),this, SLOT(RemoveGoButtonClicked()));

    scale(qreal(0.8), qreal(0.8));

    QGraphicsScene *scene = new QGraphicsScene(this);;
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(-300, -300, 600, 600);
    setScene(scene);
    setCacheMode(CacheBackground);
    setViewportUpdateMode(BoundingRectViewportUpdate);
    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
    setMinimumSize(400, 400);

    scene->addWidget(CreateLE);
    scene->addWidget(CreateLabel);
    scene->addWidget(CreateGoButton);
    scene->addWidget(SearchLE);
    scene->addWidget(SearchLabel);
    scene->addWidget(SearchGoButton);
    scene->addWidget(InsertLE);
    scene->addWidget(InsertLabel);
    scene->addWidget(InsertGoButton);
    scene->addWidget(RemoveLE);
    scene->addWidget(RemoveLabel);
    scene->addWidget(RemoveGoButton);
    scene->addWidget(MenuuButton);
    scene->addWidget(CreatButton);
    scene->addWidget(SearchButton);
    scene->addWidget(InsertButton);
    scene->addWidget(RemoveButton);


    ShowMenuItem();
    HideButtons();

    CreateLabel->setGeometry(-260,100,300,30);
    CreateLabel->setText("Создать пустую хеш-таблицу из размер =");
    CreateLabel->setStyleSheet("background: #D7E1E9; font-size: 15px");
    CreateLabel->show();
    CreateLabel->hide();

    MenuuButton->setGeometry(-480, 100, 50, 120);
    MenuuButton->setText(">");
    MenuuButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: center;}"
                             "QPushButton:hover{background: black; border:none; color: white;}");
    MenuuButton->show();

    CreateLE->setMaximum(9);
    InsertLE->setMinimum(1);
    SearchLE->setMinimum(1);
    RemoveLE->setMinimum(1);

    HashNode();
}

void HashWidget::HashNode()
{
    for (int i = 0; i < n; i++) {
        setNode.insert(i,new NodeForHash(this));
        arrIndex[i] = new QLabel();
        arrIndex[i]->setText("i="+QString::number(i));
    }

     for (auto &item : setNode) {
        scene()->addItem(item);
     }

    int num = -400;
    for (auto &item : setNode) {
        item->setPos(num,-100);
        num+=100;
    }

    for (int i = 0; i < setNode.size(); i++) {
        arrIndex[i]->setGeometry(setNode[i]->x()-15, setNode[i]->y()+20, 30, 30);
        arrIndex[i]->setStyleSheet("background: #D7E1E9; color: red;");
        scene()->addWidget(arrIndex[i]);
    }
    scene()->update();
}

void HashWidget::ShowMenuItem()
{
    CreatButton->setGeometry(-415, 100, 150, 30);
    CreatButton->setText("Создать");
    CreatButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                 "QPushButton:hover{background: black; border:none; color: white;}");
    CreatButton->show();

    SearchButton->setGeometry(-415, 130, 150, 30);
    SearchButton->setText("Поиск");
    SearchButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                        "QPushButton:hover{background: black; border:none; color: white;}");
    SearchButton->show();

    InsertButton->setGeometry(-415, 160, 150, 30);
    InsertButton->setText("Вставка");
    InsertButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                        "QPushButton:hover{background: black; border:none; color: white;}");
    InsertButton->show();

    RemoveButton->setGeometry(-415, 190, 150, 30);
    RemoveButton->setText("Удаление");
    RemoveButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                        "QPushButton:hover{background: black; border:none; color: white;}");
    RemoveButton->show();

}

void HashWidget::timeChange(int time) {//время задержки между сменой цветов
    QEventLoop loop;
    QTimer timer;
    timer.setInterval(time); //5 sec
    connect (&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    timer.start();
    loop.exec();
}

void HashWidget::HideButtons()
{
    CreateLE->hide();
    CreateLabel->hide();
    CreateGoButton->hide();
    SearchLE->hide();
    SearchLabel->hide();
    SearchGoButton->hide();
    InsertLE->hide();
    InsertLabel->hide();
    InsertGoButton->hide();
    RemoveLE->hide();
    RemoveLabel->hide();
    RemoveGoButton->hide();
    CreatButton->hide();
    SearchButton->hide();
    InsertButton->hide();
    RemoveButton->hide();
}



void HashWidget::scaleView(qreal scaleFactor)
{
    qreal factor = transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
    if (factor < 0.07 || factor > 100)
        return;

    scale(scaleFactor, scaleFactor);
}

void HashWidget::MenuButtonClicked()
{
    if (count != 2) {
        MenuuButton->setText("<");

        ShowMenuItem();
        count++;
    }
    else  {
        MenuuButton->setText(">");
        HideButtons();
        count = 1;
    }
}

void HashWidget::CreateButtonClicked()
{
    SearchLE->hide();
    SearchLabel->hide();
    SearchGoButton->hide();
    InsertLE->hide();
    InsertLabel->hide();
    InsertGoButton->hide();
    RemoveLE->hide();
    RemoveLabel->hide();
    RemoveGoButton->hide();

    CreateLE->setGeometry(40, 100, 60, 30);
    CreateLE->show();

    CreateLabel->setGeometry(-260,100,300,30);
    CreateLabel->setText("Создать пустую хеш-таблицу из размер =");
    CreateLabel->setStyleSheet("background: #D7E1E9; font-size: 15px");
    CreateLabel->show();

    CreateGoButton->setGeometry(110, 100, 50, 30);
    CreateGoButton->setText("Go");
    CreateGoButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                             "QPushButton:hover{background: black; border:none; color: white;}");
    CreateGoButton->show();
}

void HashWidget::SearchButtonClicked()
{
    CreateLE->hide();
    CreateLabel->hide();
    CreateGoButton->hide();
    InsertLE->hide();
    InsertLabel->hide();
    InsertGoButton->hide();
    RemoveLE->hide();
    RemoveLabel->hide();
    RemoveGoButton->hide();

    SearchLE->setGeometry(-230, 130, 60, 30);
    SearchLE->show();

    SearchLabel->setGeometry(-260,130,30,30);
    SearchLabel->setText("v=");
    SearchLabel->setStyleSheet("background: #D7E1E9; font-size: 25px");
    SearchLabel->show();

    SearchGoButton->setGeometry(-160, 130, 50, 30);
    SearchGoButton->setText("Go");
    SearchGoButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                             "QPushButton:hover{background: black; border:none; color: white;}");
    SearchGoButton->show();
}

void HashWidget::InsertButtonClicked()
{
    SearchLE->hide();
    SearchLabel->hide();
    SearchGoButton->hide();
    CreateLE->hide();
    CreateLabel->hide();
    CreateGoButton->hide();
    RemoveLE->hide();
    RemoveLabel->hide();
    RemoveGoButton->hide();

    InsertLE->setGeometry(-230, 160, 60, 30);
    InsertLE->show();

    InsertLabel->setGeometry(-260,160,30,30);
    InsertLabel->setText("v=");
    InsertLabel->setStyleSheet("background: #D7E1E9; font-size: 25px");
    InsertLabel->show();

    InsertGoButton->setGeometry(-160, 160, 50, 30);
    InsertGoButton->setText("Go");
    InsertGoButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                             "QPushButton:hover{background: black; border:none; color: white;}");
    InsertGoButton->show();
}

void HashWidget::RemoveButtonClicked()
{
    CreateLE->hide();
    CreateLabel->hide();
    CreateGoButton->hide();
    SearchLE->hide();
    SearchLabel->hide();
    SearchGoButton->hide();
    InsertLE->hide();
    InsertLabel->hide();
    InsertGoButton->hide();

    RemoveLE->setGeometry(-230, 190, 60, 30);
    RemoveLE->show();

    RemoveLabel->setGeometry(-260, 190,30,30);
    RemoveLabel->setText("v=");
    RemoveLabel->setStyleSheet("background: #D7E1E9; font-size: 25px");
    RemoveLabel->show();

    RemoveGoButton->setGeometry(-160, 190, 50, 30);
    RemoveGoButton->setText("Go");
    RemoveGoButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                             "QPushButton:hover{background: black; border:none; color: white;}");
    RemoveGoButton->show();
}

void HashWidget::CreateGoButtonClicked()
{
    for (int i = 0; i < setNode.size(); i++) {
        delete arrIndex[i];
        scene()->update();
    }

    for (auto &item : setNode) {
       scene()->removeItem(item);
    }
    setNode.clear();

    QString number= CreateLE->text();
    n = number.toInt();
    HashNode();
}

void HashWidget::SearchGoButtonClicked()
{
    int key =  SearchLE->text().toInt();
    step = 0; int i = base = key%setNode.size();

    while (true) {

      if (step == setNode.size()) {
          QMessageBox::warning(this, tr("Ошибка"), tr("Значение не найдено!"));//сообщение об ошибке
          break;
      }
      else if (setNode.value(i)->m_node_id.toInt() == key){
          setNode.value(i)->desired = true;
          setNode.value(i)->update();
          timeChange(3000);
          setNode.value(i)->desired = false;
          setNode.value(i)->update();
          break;
      }

      else {step++;}
      i = (base+step*1)%setNode.size();
    }
}

void HashWidget::InsertGoButtonClicked()
{
    int key =  InsertLE->text().toInt();
    int counteItemHt = 0;
    for (int i = 0; i < setNode.size(); i++) {
        if (key == setNode.value(i)->m_node_id.toInt()) {
            QMessageBox::warning(this, tr("Ошибка"), tr("Ключ должен быть уникальным!"));//сообщение об ошибке
            return;
        }
        else if (setNode.value(i)->m_node_id != "") {
            counteItemHt++;
        }
    }

    if (counteItemHt == setNode.size()) {
        QMessageBox::warning(this, tr("Ошибка"), tr("Хеш таблица заполнена!"));//сообщение об ошибке
        return;
    }

    step = 0;
    int i = base = key%setNode.size();
    while (setNode.value(i)->m_node_id != "" && setNode.value(i)->m_node_id != "del") {
        step++;
        i = (base+step*1)%setNode.size();
        setNode.value(i)->desired = true;
        setNode.value(i)->update();
        timeChange(500);
        setNode.value(i)->desired = false;
        setNode.value(i)->update();
    }
    setNode.value(i)->m_node_id = InsertLE->text();
    setNode.value(i)->desired = true;
    setNode.value(i)->update();
    timeChange(500);
    setNode.value(i)->desired = false;
    setNode.value(i)->update();

    scene()->update();
}

void HashWidget::RemoveGoButtonClicked()
{
    int key =  RemoveLE->text().toInt();
    int i = base = key%setNode.size();

    while (true) {

        if (setNode[i]->m_node_id == "") {
            QMessageBox::warning(this, tr("Ошибка"), tr("Значение не найдено!"));//сообщение об ошибке
            break;
        }

        else if (setNode[i]->m_node_id.toInt() == key) {
            setNode[i]->m_node_id = "del";
            setNode.value(i)->update();
            break;
        }
        else {step++;}
        i = (base+step*1)%setNode.size();
    }
}








