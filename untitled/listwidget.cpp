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
#include <QTimer>
#include <QEventLoop>
#include <algorithm>

ListWidget::ListWidget(QWidget *parent)
    : QGraphicsView(parent)
{

    for (int i = 0; i < 100000; i++) {
        listEdgeForList[i] = NULL;
    }

    connect(CreatButton,SIGNAL(clicked()),this, SLOT(CreateDiv()));
    connect(RandomFxdS,SIGNAL(clicked()),this, SLOT(RandomFixSizeDiv()));
    connect(InsertButton,SIGNAL(clicked()),this, SLOT(InsertDiv()));
    connect(SearchButton,SIGNAL(clicked()),this, SLOT(SearchDiv()));
    connect(RemoveButton,SIGNAL(clicked()),this, SLOT(RemoveDiv()));
    connect(RandomBtn,SIGNAL(clicked()),this, SLOT(RandomDiv()));
    connect(RandomStoredBtn,SIGNAL(clicked()),this, SLOT(RandomSortedDiv()));
    connect(Menuu,SIGNAL(clicked()),this, SLOT(MenuDiv()));
    connect(CreateGo,SIGNAL(clicked()),this, SLOT(CreateGoDiv()));
    connect(SearchGo,SIGNAL(clicked()),this, SLOT(SearchGoDiv()));
    connect(InsertTail,SIGNAL(clicked()),this, SLOT(InsertTailDiv()));
    connect(InsertHead,SIGNAL(clicked()),this, SLOT(InsertHeadlDiv()));
    connect(RemoveHead,SIGNAL(clicked()),this, SLOT(RemoveHeadlDiv()));
    connect(RemoveTail,SIGNAL(clicked()),this, SLOT(RemoveTaillDiv()));

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

    scene->addWidget(RandomBtn);
    scene->addWidget(RandomStoredBtn);
    scene->addWidget(RandomFxdS);
    scene->addWidget(InsertHead);
    scene->addWidget(InsertTail);
    scene->addWidget(SearchLE);
    scene->addWidget(SearchLabel);
    scene->addWidget(SearchGo);
    scene->addWidget(FixedSizeLe);
    scene->addWidget(CreateGo);
    scene->addWidget(RemoveHead);
    scene->addWidget(RemoveTail);
    scene->addWidget(Menuu);
    scene->addWidget(CreatButton);
    scene->addWidget(SearchButton);
    scene->addWidget(InsertButton);
    scene->addWidget(RemoveButton);

    RandomBtn->hide();
    RandomStoredBtn->hide();
    RandomFxdS->hide();
    InsertHead->hide();
    InsertTail->hide();
    SearchLE->hide();
    SearchLabel->hide();
    SearchGo->hide();
    FixedSizeLe->hide();
    RemoveHead->hide();
    RemoveTail->hide();
    FixedSizeLe->hide();
    CreateGo->hide();
    CreatButton->hide();
    SearchButton->hide();
    InsertButton->hide();
    RemoveButton->hide();

    Menuu->setGeometry(-480, 100, 50, 120);
    Menuu->setText(">");
    Menuu->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: center;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    Menuu->show();

    FixedSizeLe->setMaximum(9);
    Node_ON_Scene(nn);
}

void ListWidget::timeChange(int time) {//время задержки между сменой цветов
    QEventLoop loop;
    QTimer timer;
    timer.setInterval(time); //5 sec
    connect (&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    timer.start();
    loop.exec();
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
        listNodeForList.at(i)->m_node_id = 1+rand()%99;
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
        if (i != nn-1) {
            int maxid = qMax(i,i+1);
            int minid = qMin(i,i+1);
            int edge_id = (18-minid)*(minid+1)/2+maxid-10;

            listEdgeForList[edge_id] = new EdgeForList(listNodeForList[i], listNodeForList[i+1]);
            scene()->addItem(listEdgeForList[edge_id]);
        }
    }

    scene()->update();
}

void ListWidget::CreateDiv()
{
    InsertHead->hide();
    InsertTail->hide();
    SearchLE->hide();
    SearchLabel->hide();
    SearchGo->hide();
    RemoveHead->hide();
    RemoveTail->hide();

    RandomBtn->setGeometry(-230, 100, 60, 30);
    RandomBtn->setText("Random");
    RandomBtn->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    RandomBtn->show();

    RandomStoredBtn->setGeometry(-150, 100, 110, 30);
    RandomStoredBtn->setText("Random Sorted");
    RandomStoredBtn->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    RandomStoredBtn->show();

    RandomFxdS->setGeometry(-20, 100, 130, 30);
    RandomFxdS->setText("Random Fixed Size");
    RandomFxdS->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    RandomFxdS->show();

}

void ListWidget::InsertDiv()
{
    SearchLE->hide();
    RandomBtn->hide();
    RandomStoredBtn->hide();
    RandomFxdS->hide();
    SearchLabel->hide();
    SearchGo->hide();
    FixedSizeLe->hide();
    CreateGo->hide();
    RemoveHead->hide();
    RemoveTail->hide();

    InsertHead->setGeometry(-230, 160, 150, 30);
    InsertHead->setText("i=0(Head), specify v=");
    InsertHead->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    InsertHead->show();

    InsertTail->setGeometry(-60, 160, 150, 30);
    InsertTail->setText("i=0(Tail), specify v=");
    InsertTail->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    InsertTail->show();
}

void ListWidget::SearchDiv()
{
    RandomBtn->hide();
    RandomStoredBtn->hide();
    RandomFxdS->hide();
    InsertHead->hide();
    InsertTail->hide();
    FixedSizeLe->hide();
    CreateGo->hide();
    RemoveHead->hide();
    RemoveTail->hide();

    SearchLE->setGeometry(-230, 130, 60, 30);
    SearchLE->show();

    SearchLabel->setGeometry(-260,130,30,30);
    SearchLabel->setText("v=");
    SearchLabel->setStyleSheet("background: #D7E1E9; font-size: 25px");
    SearchLabel->show();

    SearchGo->setGeometry(-160, 130, 50, 30);
    SearchGo->setText("Go");
    SearchGo->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    SearchGo->show();
}

void ListWidget::RandomFixSizeDiv()
{
    FixedSizeLe->setGeometry(-20, 125, 76, 30);
    FixedSizeLe->show();

    CreateGo->setGeometry(58, 125, 50, 30);
    CreateGo->setText("Go");
    CreateGo->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    CreateGo->show();
}

void ListWidget::RemoveDiv()
{
    SearchLE->hide();
    RandomBtn->hide();
    RandomStoredBtn->hide();
    RandomFxdS->hide();
    SearchLabel->hide();
    SearchGo->hide();
    FixedSizeLe->hide();
    CreateGo->hide();
    InsertHead->hide();
    InsertTail->hide();

    RemoveHead->setGeometry(-230, 190, 150, 30);
    RemoveHead->setText("Remove i=0 (Head)");
    RemoveHead->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    RemoveHead->show();

    RemoveTail->setGeometry(-60, 190, 150, 30);
    RemoveTail->setText("Remove i=N-1 (Tail)");
    RemoveTail->setStyleSheet("QPushButton{background: #F1F2F2; border: 0px solid black; color: black; text-align: left;}"
                                         "QPushButton:hover{background: black; border:none; color: white;}");
    RemoveTail->show();
}

void ListWidget::RandomDiv()
{
     isFront = false;
    countt = 0;
    FixedSizeLe->hide();
    CreateGo->hide();

    for (int i = 0; i < nn; i++) {
        scene()->removeItem(listNodeForList.at(i));
    }
    int k = 0;
    for (int i = 0; i < 100000; i++) {
        if (listEdgeForList[i] != NULL) {
            int maxid = qMax(k,k+1);
            int minid = qMin(k,k+1);
            int edge_id = (18-minid)*(minid+1)/2+maxid-10;
            scene()->removeItem(listEdgeForList[edge_id]);
            listEdgeForList[edge_id] = NULL;
            k++;
        }
    }

    listNodeForList.clear();


    srand(time(NULL));
    int b = nn;
    while (nn == b) {
        nn = 2 + rand()%(9-2+1);
    }
    Node_ON_Scene(nn);
}

void ListWidget::RandomSortedDiv()
{
    isFront = false;
    countt = 0;
    FixedSizeLe->hide();
    CreateGo->hide();

    for (int i = 0; i < nn; i++) {
        scene()->removeItem(listNodeForList.at(i));
    }
    int k = 0;
    for (int i = 0; i < 100000; i++) {
        if (listEdgeForList[i] != NULL) {
            int maxid = qMax(k,k+1);
            int minid = qMin(k,k+1);
            int edge_id = (18-minid)*(minid+1)/2+maxid-10;
            scene()->removeItem(listEdgeForList[edge_id]);
            listEdgeForList[edge_id] = NULL;
            k++;
        }
    }
    listNodeForList.clear();


    srand(time(NULL));
    int b = nn;
    while (nn == b) {
        nn = 2 + rand()%(9-2+1);
    }

    for (int i = 0; i < nn; i++) {
        listNodeForList.push_back(new NodeForList(this));
    }

    srand(time(NULL));
    QList<int> listInt;
    for (int i = 0; i < nn; i++) {
        int num = 1+rand()%99;
        listInt.push_back(num);
    }

    for (int i = 0; i < nn-1; i++) {
        for (int j = 0; j < nn-i-1; j++) {
            if (listInt[j] > listInt[j+1]) {
                qSwap(listInt[j],listInt[j+1]);
            }
        }
    }

    for (int i = 0; i < nn; i++) {
        listNodeForList.at(i)->m_node_id = listInt.at(i);
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
        if (i != nn-1) {
            int maxid = qMax(i,i+1);
            int minid = qMin(i,i+1);
            int edge_id = (18-minid)*(minid+1)/2+maxid-10;

            listEdgeForList[edge_id] = new EdgeForList(listNodeForList[i], listNodeForList[i+1]);
            scene()->addItem(listEdgeForList[edge_id]);
        }
    }


    scene()->update();
}

void ListWidget::MenuDiv()
{
    if (count != 2) {
        Menuu->setText("<");

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

        count++;
    }
    else  {
         Menuu->setText(">");

         RandomBtn->hide();
         RandomStoredBtn->hide();
         RandomFxdS->hide();
         InsertHead->hide();
         InsertTail->hide();
         SearchLE->hide();
         SearchLabel->hide();
         SearchGo->hide();
         FixedSizeLe->hide();
         RemoveHead->hide();
         RemoveTail->hide();
         FixedSizeLe->hide();
         CreateGo->hide();
         CreatButton->hide();
         SearchButton->hide();
         InsertButton->hide();
         RemoveButton->hide();

         count = 1;
    }
}

void ListWidget::CreateGoDiv()
{
     isFront = false;
    countt = 0;
    for (int i = 0; i < nn; i++) {
        scene()->removeItem(listNodeForList.at(i));
    }
    int k = 0;
    for (int i = 0; i < 100000; i++) {
        if (listEdgeForList[i] != NULL) {
            int maxid = qMax(k,k+1);
            int minid = qMin(k,k+1);
            int edge_id = (18-minid)*(minid+1)/2+maxid-10;
            scene()->removeItem(listEdgeForList[edge_id]);
            listEdgeForList[edge_id] = NULL;
            k++;
        }
    }
    listNodeForList.clear();

    QString number= FixedSizeLe->text();
    nn = number.toInt();
    Node_ON_Scene(nn);
}

void ListWidget::SearchGoDiv()
{
    for (int i = 0; i < nn; i++) {
        listNodeForList.at(i)->desired = false;
        listNodeForList.at(i)->isChoosed = false;
        listNodeForList.at(i)->update();
    }

    int k = 0;
    int edge_id, maxid, minid;

    for (int i = 0; i < nn; i++) {
        listNodeForList.at(i)->isChoosed = true;
        listNodeForList.at(i)->update();

        if (listNodeForList.at(i)->m_node_id == SearchLE->text().toInt()) {
            listNodeForList.at(i)->desired = true;
            break;
        }

        timeChange(500);
        if (i != nn-1) {
            if (!isFront) {
                maxid = qMax(k,k+1);
                minid = qMin(k,k+1);
            }
            else {
                maxid = qMax(nn-i-2,nn-i-1);
                minid = qMin(nn-i-2,nn-i-1);
            }
                edge_id = (18-minid)*(minid+1)/2+maxid-10;
                listEdgeForList[edge_id]->isChoosed = true;
                listEdgeForList[edge_id]->update();
                k++;
                timeChange(500);
                listEdgeForList[edge_id]->isChoosed = false;
                listEdgeForList[edge_id]->update();
        }


         listNodeForList.at(i)->isChoosed = false;
         listNodeForList.at(i)->update();
    }
}

void ListWidget::InsertTailDiv()
{
    for (int i = 0; i < nn; i++) {
        listNodeForList.at(i)->desired = false;
        listNodeForList.at(i)->isChoosed = false;
        listNodeForList.at(i)->update();
    }

    isFront = false;
    countt = 0;

    if (nn != 9)
        nn++;
    else
        return;
    NodeForList* node = new NodeForList(this);
    node->m_node_id = 1+rand()%99;
    listNodeForList.push_back(node);
    scene()->addItem(listNodeForList.at(nn-1));

    int num = 500;
    for (int i = 0; i < nn; i++) {
        if (i == 0) {
            num+=nn*(-100);
        }
        listNodeForList.at(i)->setPos(num,-100);
        num+=100;
    }

    int maxid = qMax(nn-2,nn-1);
    int minid = qMin(nn-2,nn-1);
    int edge_id = (18-minid)*(minid+1)/2+maxid-10;

    listEdgeForList[edge_id] = new EdgeForList(listNodeForList[nn-2], listNodeForList[nn-1]);
    scene()->addItem(listEdgeForList[edge_id]);



   NodeForList* buff = listNodeForList[nn-1];
   listNodeForList[nn-1]->insertAndRemove = true;
   auto *moveAnimation = new QVariantAnimation();

    moveAnimation->setDuration(1000);
    moveAnimation->setStartValue(QPointF(listNodeForList[nn-2]->x(), listNodeForList[nn-2]->y()+100));
    moveAnimation->setEndValue(QPointF(listNodeForList[nn-2]->x()+100, listNodeForList[nn-2]->y()));
    moveAnimation->start(QAbstractAnimation::DeleteWhenStopped);

    QObject::connect(moveAnimation, &QVariantAnimation::valueChanged, [buff](const QVariant &value){
        buff->setPos(value.toPointF());
        buff->update();
    });

    timeChange(1100);
     listNodeForList[nn-1]->insertAndRemove = false;
     listNodeForList[nn-1]->update();
}

void ListWidget::InsertHeadlDiv()
{
    for (int i = 0; i < nn; i++) {
        listNodeForList.at(i)->desired = false;
        listNodeForList.at(i)->isChoosed = false;
        listNodeForList.at(i)->update();
    }

    isFront = true;
    countt = 0;

    if (nn != 9)
        nn++;
    else
        return;

    NodeForList* node = new NodeForList(this);
    node->m_node_id = 1+rand()%99;
    listNodeForList.push_front(node);
    scene()->addItem(listNodeForList.at(0));

    int num = 500;
    for (int i = 0; i < nn; i++) {
        if (i == 0) {
            num+=nn*(-100);
        }
        listNodeForList.at(i)->setPos(num,-100);
        num+=100;
    }

    int maxid = qMax(nn-2,nn-1);
    int minid = qMin(nn-2,nn-1);
    int edge_id = (18-minid)*(minid+1)/2+maxid-10;

    listEdgeForList[edge_id] = new EdgeForList(listNodeForList[0], listNodeForList[1]);
    scene()->addItem(listEdgeForList[edge_id]);

    NodeForList* buff = listNodeForList[0];
    listNodeForList[0]->insertAndRemove = true;
    auto *moveAnimation = new QVariantAnimation();

     moveAnimation->setDuration(1000);
     moveAnimation->setStartValue(QPointF(listNodeForList[1]->x(), listNodeForList[1]->y()+100));
     moveAnimation->setEndValue(QPointF(listNodeForList[1]->x()-100, listNodeForList[1]->y()));
     moveAnimation->start(QAbstractAnimation::DeleteWhenStopped);

     QObject::connect(moveAnimation, &QVariantAnimation::valueChanged, [buff](const QVariant &value){
         buff->setPos(value.toPointF());
         buff->update();
     });

     timeChange(1100);
     listNodeForList[0]->insertAndRemove = false;
     listNodeForList[0]->update();
}

void ListWidget::RemoveHeadlDiv()
{
    if (nn == 1)
        return;

    if (!isFront) {
        int maxid = qMax(countt,countt+1);
        int minid = qMin(countt,countt+1);
        int edge_id = (18-minid)*(minid+1)/2+maxid-10;
        scene()->removeItem(listEdgeForList[edge_id]);
        listEdgeForList[edge_id] = NULL;
    }
    else {
        int maxid = qMax(nn-2,nn-1);
        int minid = qMin(nn-2,nn-1);
        int edge_id = (18-minid)*(minid+1)/2+maxid-10;
        scene()->removeItem(listEdgeForList[edge_id]);
        listEdgeForList[edge_id] = NULL;
    }

    scene()->removeItem(listNodeForList.at(0));
    listNodeForList.pop_front();

    countt++;
    nn--;
}

void ListWidget::RemoveTaillDiv()
{
    if (nn == 1)
        return;


    if (isFront) {
        int maxid = qMax(countt,countt+1);
        int minid = qMin(countt,countt+1);
        int edge_id = (18-minid)*(minid+1)/2+maxid-10;
        scene()->removeItem(listEdgeForList[edge_id]);
        listEdgeForList[edge_id] = NULL;
    }
    else {
        int maxid = qMax(nn-2,nn-1);
        int minid = qMin(nn-2,nn-1);
        int edge_id = (18-minid)*(minid+1)/2+maxid-10;
        scene()->removeItem(listEdgeForList[edge_id]);
        listEdgeForList[edge_id] = NULL;
    }

    scene()->removeItem(listNodeForList.at(nn-1));
    listNodeForList.pop_back();

    countt++;
    nn--;
}




