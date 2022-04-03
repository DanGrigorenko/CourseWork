#include "listwidget.h"
#include "edgeforlist.h"
#include "nodeforlist.h"
#include <QMessageBox>
#include <math.h>
#include <QKeyEvent>
#include <QRandomGenerator>
#include <QPainter>
#include <ctime>
#include <QPushButton>
#include <QLabel>

ListWidget::ListWidget(QWidget *parent)
    : QGraphicsView(parent)
{
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

    for (int i = 0; i < 100000; i++) {
        edge[i] = NULL;
    }

    CreatButton->setGeometry(-415, 100, 150, 30);
    CreatButton->setText("Создать");
    CreatButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    scene->addWidget(CreatButton);

    SearchButton->setGeometry(-415, 130, 150, 30);
    SearchButton->setText("Поиск");
    SearchButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                "QPushButton:hover{background: black; border:none; color: white;}");
    scene->addWidget(SearchButton);

    InsertButton->setGeometry(-415, 160, 150, 30);
    InsertButton->setText("Вставка");
    InsertButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                "QPushButton:hover{background: black; border:none; color: white;}");
    scene->addWidget(InsertButton);

    RemoveButton->setGeometry(-415, 190, 150, 30);
    RemoveButton->setText("Удаление");
    RemoveButton->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                "QPushButton:hover{background: black; border:none; color: white;}");
    scene->addWidget(RemoveButton);

    Node_ON_Scene(nn);
}
void ListWidget::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Plus:
        zoomIn();
        break;
    case Qt::Key_Minus:
        zoomOut();
        break;
    default:
        QGraphicsView::keyPressEvent(event);
    }
}

void ListWidget::scaleView(qreal scaleFactor)
{
    qreal factor = transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
    if (factor < 0.07 || factor > 100)
        return;

    scale(scaleFactor, scaleFactor);
}


void ListWidget::Node_ON_Scene(int nn)
{
    for (int i = 0; i < nn; i++) {
        listNodeForList.push_back(new NodeForList(this));
    }

    srand(time(NULL));
    for (int i = 0; i < nn; i++) {
        if (i == 0)
            listNodeForList.at(i)->m_node_id = 0;
        else
            listNodeForList.at(i)->m_node_id = i;
        scene()->addItem(listNodeForList.at(i));
    }

    int num = 500;
    for (int i = 0; i < nn; i++) {
        if (i == 0) {
            num+=nn*(-100);
        }
        listNodeForList.at(i)->setPos(num,-100);
        num+=100;
    }


    for (int i = 0; i < nn; i++) {
        if (i != nn-1)
            scene()->addItem(new EdgeForList(listNodeForList.at(i), listNodeForList.at(i+1)));
    }
    scene()->update();
}

void ListWidget::zoomIn()
{
    for (int i = 0; i < nn; i++) {
        scene()->removeItem(listNodeForList.at(i));
    }

    if (nn <= 8) {
        nn++;
    }
    else {
         QMessageBox::warning(this, tr("Ошибка"), tr("Максимальное количество граф равно '9'!"));//сообщение об ошибке
    }
    Node_ON_Scene(nn);
}

void ListWidget::zoomOut()
{

    for (int i = 0; i < nn; i++) {
        scene()->removeItem(listNodeForList.at(i));
    }


    if (nn > 1) {
         nn--;
    }
    else {
         QMessageBox::warning(this, tr("Ошибка"), tr("Минимальное количествво граф равно '1'!"));//сообщение об ошибке
    }
    Node_ON_Scene(nn);
}





