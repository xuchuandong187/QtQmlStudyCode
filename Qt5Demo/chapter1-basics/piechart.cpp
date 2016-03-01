#include "piechart.h"
#include <QPainter>

//![0]
PieChart::PieChart(QQuickItem *parent)
    : QQuickPaintedItem(parent)
{
}
//![0]
PieChart::~PieChart() {

}

QString PieChart::name() const
{
    return m_name;
}

void PieChart::setName(const QString &name)
{
    m_name = name;
}

QColor PieChart::color() const
{
    return m_color;
}

void PieChart::setColor(const QColor &color)
{
    m_color = color;
}

//![1]
void PieChart::paint(QPainter *painter)
{
    QPen pen(m_color, 2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    painter->drawPie(boundingRect().adjusted(1, 1, -1, -1), 90 * 16, 290 * 16); // 饼状图在矩形范围内的位置与角度。角度的精度为1/16度。
}

bool PieChart::event( QEvent *) {
    return true;
}

//![1]
