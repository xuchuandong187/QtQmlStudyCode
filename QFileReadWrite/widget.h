#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QJsonDocument>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    int analysis_value( QString );
    bool get_value( const QString &s_key, QJsonValue &s_value );
    void get_json_value( const QJsonValue &js_value );
    void print_json_value( const QJsonValue &js_value );
    QString ms_file_name;
    QJsonDocument m_json_doc;
    QString ms_json_value;
};

#endif // WIDGET_H
