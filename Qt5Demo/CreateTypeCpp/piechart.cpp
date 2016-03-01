#include "piechart.h"
#include <QPainter>

Piechart::Piechart(QQuickItem *parent) :
    QQuickPaintedItem(parent)
{

}

QString Piechart::name() const {
    return m_name;
}

void Piechart::setName( const QString &name ) {
    m_name = name;
}

QColor Piechart::color() const {
    return m_color;
}

void Piechart::setColor( const QColor &color ) {
    m_color = color;
}

void Piechart::paint(QPainter *painter) {
    QPen pen( m_color, 2 );
    painter->setPen( pen );
    painter->setRenderHints( QPainter::Antialiasing, true );
    painter->drawPie( boundingRect().adjusted( 1, 1, -1, -1 ), 90 * 16, 290 * 16);
}

Piechart::~Piechart()
{
    //delete ui;
}
