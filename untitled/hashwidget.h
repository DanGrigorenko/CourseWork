#ifndef HASHWIDGET_H
#define HASHWIDGET_H

#include <QGraphicsView>
#include <QLineEdit>
#include <QList>
#include <QStack>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QSpinBox>
#include <QPropertyAnimation>
#include <QMap>

class NodeForHash;
class EdgeForHash;
class HashWidget : public QGraphicsView
{
    Q_OBJECT

public:
    HashWidget(QWidget *parent = nullptr);
    NodeForHash* arrKey[9];
    NodeForHash* arrMeaning[9];
    EdgeForHash* listEdgeForList[100000];
    QMap<int,NodeForHash*> setNode;
    int firstnode = 0;

public slots:
    void HashNode();
    void ShowMenuItem();
    void timeChange(int time);
    void HideButtons();
    void CreateButtonClicked();
    void InsertButtonClicked();
    void SearchButtonClicked();
    void RemoveButtonClicked();
    void MenuButtonClicked();
    void CreateGoButtonClicked();
    void SearchGoButtonClicked();
    void InsertGoButtonClicked();

protected:
    void scaleView(qreal scaleFactor);

private:
    int base, count = 1,num = -350,  step = 0, n = 9;

    QPushButton* InsertButton = new QPushButton();
    QPushButton* RemoveButton = new QPushButton();
    QPushButton* SearchButton = new QPushButton();
    QPushButton* CreatButton = new QPushButton();

    QSpinBox* SearchLE = new QSpinBox();
    QLabel* SearchLabel = new QLabel();
    QPushButton* SearchGoButton = new QPushButton();

    QSpinBox* CreateLE = new QSpinBox();
    QLabel* CreateLabel = new QLabel();
    QPushButton* CreateGoButton = new QPushButton();

    QSpinBox* RemoveLE = new QSpinBox();
    QLabel* RemoveLabel = new QLabel();
    QPushButton* RemoveGoButton = new QPushButton();

    QLineEdit* InsertLE = new QLineEdit();
    QLabel*InsertLabel = new QLabel();
    QPushButton* InsertGoButton = new QPushButton();

    QPushButton* MenuuButton = new QPushButton();
};
#endif // HASHWIDGET_H
