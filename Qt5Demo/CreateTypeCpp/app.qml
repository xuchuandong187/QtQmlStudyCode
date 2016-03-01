import Charts 1.0              // 首先我们引入上面定义的命名空间
import QtQuick 2.0

Item {
    width: 300; height: 200

    Piechart {                 // 接着我们就可以使用"PieChart"这个类型
        id: aPieChart
        anchors.centerIn: parent
        width: 100; height: 100
        name: "A simple pie chart"
        color: "red"          // color属性会与QColor类型自动对应起来，很多属性有这种对应关系
    }

    Text {                   // 然后再定义一个Text来显示PieChart的name属性的值
        anchors { bottom: parent.bottom; horizontalCenter: parent.horizontalCenter; bottomMargin: 20 }
        text: aPieChart.name
    }
}
