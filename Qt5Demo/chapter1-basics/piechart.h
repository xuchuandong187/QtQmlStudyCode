#ifndef PIECHART_H
#define PIECHART_H

//![0]
#include <QtQuick/QQuickPaintedItem>
#include <QColor>

class PieChart : public QQuickPaintedItem // 为了基于QPainter API实现自定义的绘制效果，我们需要继承这个类。如果不需要使用QPainter API，我们可以继承QQuickItem，甚至如果连可视化也不需要，QObject以及它的子类都可以作为我们继承的对象
{
    Q_OBJECT                              // 因为需要使用到Qt的元对象系统
    Q_PROPERTY(QString name READ name WRITE setName)      // 注册两个自定义属性
    Q_PROPERTY(QColor color READ color WRITE setColor)

public:
    PieChart(QQuickItem *parent = 0);     // 作为可视化组件我们需要将其父对象设置为QQuickItem
    ~PieChart();

    QString name() const;                 // 定义属性的读写函数
    void setName(const QString &name);

    QColor color() const;
    void setColor(const QColor &color);

    void paint(QPainter *painter);         // 最后我们重载QQuickPaintedItem的paint函数，实现我们的自定义绘图
    bool event( QEvent *);
private:
    QString m_name;
    QColor m_color;
};
//![0]

#endif
