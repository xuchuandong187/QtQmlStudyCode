#include "piechart.h"
#include <QApplication>
#include <QtQuick/QQuickView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qmlRegisterType<Piechart>("Charts", 1, 0, "Piechart");
    QQuickView view;
    view.setResizeMode( QQuickView::SizeRootObjectToView );
    view.setSource( QUrl("qrc:///app.qml") );
    view.show();
    return a.exec();
}
