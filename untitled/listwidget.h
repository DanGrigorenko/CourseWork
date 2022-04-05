#ifndef LISTWIDGET_H
#define LISTWIDGET_H


#include <QGraphicsView>
#include <QLineEdit>
#include <QList>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QSpinBox>
#include <QPropertyAnimation>

class NodeForList;
class EdgeForList;
class ListWidget : public QGraphicsView
{
    Q_OBJECT

public:
    ListWidget(QWidget *parent = nullptr);
    QList<NodeForList*> listNodeForList;
    EdgeForList* listEdgeForList[100000];
    int firstnode = 0;

public slots:
    void timeChange(int time);
    void Node_ON_Scene(int n);
    void CreateDiv();
    void InsertDiv();
    void SearchDiv();
    void RandomFixSizeDiv();
    void RemoveDiv();
    void RandomDiv();
    void RandomSortedDiv();
    void MenuDiv();
    void CreateGoDiv();
    void SearchGoDiv();
    void InsertTailDiv();
    void InsertHeadlDiv();
    void RemoveHeadlDiv();
    void RemoveTaillDiv();

protected:
    void scaleView(qreal scaleFactor);

private:
    int nn = 3, count = 1, countt = 0;
    bool isFrontOrBack = false;
    QPushButton* InsertButton = new QPushButton();
    QPushButton* RemoveButton = new QPushButton();
    QPushButton* SearchButton = new QPushButton();
    QPushButton* CreatButton = new QPushButton();
    QPushButton* RandomBtn = new QPushButton();
    QPushButton* RandomFxdS = new QPushButton();
    QSpinBox* FixedSizeLe = new QSpinBox();
    QPushButton* CreateGo = new QPushButton();
    QPushButton* RandomStoredBtn = new QPushButton();
    QPushButton* InsertHead = new QPushButton();
    QPushButton* InsertTail = new QPushButton();
    QSpinBox* SearchLE = new QSpinBox();
    QLabel* SearchLabel = new QLabel();
    QPushButton* SearchGo = new QPushButton();
    QPushButton* RemoveHead = new QPushButton();
    QPushButton* RemoveTail = new QPushButton();
    QPushButton* Menuu = new QPushButton();
};
#endif // LISTWIDGET_H
