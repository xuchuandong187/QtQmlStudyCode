#include "widget.h"
#include "ui_widget.h"
#include "qdebug.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

QString configPath;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    configPath = QCoreApplication::applicationDirPath() + "/battery_value.config";
    QFile file( configPath );
    if ( file.open( QIODevice::ReadOnly | QIODevice::Text ) ) {
        qDebug() << "xcd success";
        QStringList value_key;
        value_key << "max" << "mid";
        for ( int i = 0; i < 2; i++ ) {
            analysis_value( value_key.at( i ) );
        }
        file.close();
    } else {

    }
}

Widget::~Widget()
{
    delete ui;
}

int Widget::analysis_value( QString value_key ) {
    QJsonDocument m_json_doc;
    QJsonValue battery_value;
    get_value( value_key, battery_value );
    return battery_value.toString().toInt();
}

bool Widget::get_value( const QString &s_key, QJsonValue &s_value ) {
    //qDebug()<<s_key<<"s_key";
    QFile file( ms_file_name );
    file.open( QIODevice::ReadOnly | QIODevice::Text );
    QTextStream stream( &file );
    QString value = stream.readAll();
    file.close();

    QJsonParseError error;
    m_json_doc = QJsonDocument::fromJson( value.toUtf8(), &error );
    if( !m_json_doc.isEmpty() && error.error == QJsonParseError::NoError ) {
        QJsonObject item = m_json_doc.object();
        if( !item.isEmpty() && item.contains( s_key ) ) {//json type:object
            s_value = item.value( s_key );
            get_json_value( s_value );
            return true;
        } else {
            qDebug() << "key doesn't exist." << s_key << endl;
            return false;
        }
    } else {
        qDebug() << "parse json file failed:" << error.errorString() << endl;
        return false;
    }
    return true;
}

void Widget::get_json_value( const QJsonValue &js_value ) {
    ms_json_value.clear();
    print_json_value( js_value );
}

void Widget::print_json_value( const QJsonValue &js_value ) {
    if( js_value.isObject() ) {
        QJsonObject object = js_value.toObject();
        QJsonObject::iterator i;
        for( i = object.begin(); i != object.end(); i ++ ) {
            ms_json_value.append( "\"" );
            ms_json_value.append( i.key() );
            ms_json_value.append( "\"");
            ms_json_value.append( ":" );
            if( i.value().isObject() ) {
                ms_json_value.append( "{" );
                print_json_value( i.value().toObject() );
                ms_json_value.append( "}" );
            }
            if( i.value().isString() ) {
                ms_json_value.append( "\"" );
                ms_json_value.append( i.value().toString() );
                ms_json_value.append( "\"" );
                if( i != object.end() - 1 ) {
                    ms_json_value.append( "," );
                }
            }
            if( i.value().isDouble() ) {
                ms_json_value.append( QString::number( i.value().toDouble() ) );
                if( i != object.end() - 1 ) {
                    ms_json_value.append( "," );
                }
            }
        }
    }
}
