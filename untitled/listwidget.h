#ifndef LISTWIDGET_H
#define LISTWIDGET_H


#include <QGraphicsView>
#include <QLineEdit>
#include <QList>

class NodeForList;
class EdgeForList;
class ListWidget : public QGraphicsView
{
    Q_OBJECT

public:
    ListWidget(QWidget *parent = nullptr);
    QList<NodeForList*> listNodeForList;
    EdgeForList *edge[100000];
    int firstnode = 0;

public slots:
    void zoomIn();
    void zoomOut();
    void Node_ON_Scene(int n);

protected:
    void keyPressEvent(QKeyEvent *event) override;

    void scaleView(qreal scaleFactor);

private:
    int nn = 3;
    QGraphicsTextItem * field;
};
#endif // LISTWIDGET_H
