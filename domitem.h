#ifndef DOMITEM_H
#define DOMITEM_H

#include <QDomNode>
#include <QHash>
#include <QtAlgorithms>

class DomItem
{
public:
    DomItem(const QDomNode& node, int row, DomItem* parent = nullptr);
    ~DomItem();

    DomItem* child(int i);
    DomItem* parent();
    QDomNode node() const;
    int row() const;

private:
    QDomNode domNode;
    QHash<int, DomItem*> childItems;
    DomItem* parentItem;
    int rowNumber;
};

#endif // DOMITEM_H
