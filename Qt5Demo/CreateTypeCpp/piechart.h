#ifndef PIECHART_H
#define PIECHART_H

#include <QtQuick/QQuickPaintedItem>
#include <QColor>

class Piechart : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)      // 注册两个自定义属性
    Q_PROPERTY(QColor color READ color WRITE setColor)

public:
    explicit Piechart( QQuickItem *parent = 0 );
    QString name() const;
    void setName( const QString &name );

    QColor color() const;
    void setColor( const QColor &color );

    void paint( QPainter *painter );
    ~Piechart();

private:
    QString m_name;
    QColor m_color;
};

#endif // WIDGET_H
