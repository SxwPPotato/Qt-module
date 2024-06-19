#include "mainwindow.h"

#include <QApplication>
#include <QtCore>
#include <QtWidgets>
#include <QtNetwork>
#include <QtSQL>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVector<int> vec = {1,2} ;
    QList<char> list = {'a','b','c'};
    QCheckBox checkbox ;
    QComboBox combobox;

    QSqlDatabase db;
    QSqlQuery query("qwert", db);

    QNetworkAccessManager* access;
    access->get(QNetworkRequest(QUrl("https://doc.qt.io/qt-6/qnetworkaccessmanager.html")));

    MainWindow w;
    w.show();
    return a.exec();
}
