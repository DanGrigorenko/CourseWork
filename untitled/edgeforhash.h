#ifndef EDGEFORHASH_H
#define EDGEFORHASH_H

#include <QGraphicsItem>

class NodeForHash;
class EdgeForHash : public QGraphicsItem
{
public:
    EdgeForHash(NodeForHash *sourceNode, NodeForHash *destNode);
    NodeForHash *sourceNode() const;
    NodeForHash *destNode() const;
    bool isChoosed = false;

    void adjust();

    enum { Type = UserType + 2 };
    int type() const override { return Type; }

protected:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    NodeForHash *source, *dest;
    QPointF sourcePoint;
    QPointF destPoint;
    qreal arrowSize = 10;
};
#endif // EDGEFORHASH_H
