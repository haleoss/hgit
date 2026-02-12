#ifndef HGIT_APICLIENT_H
#define HGIT_APICLIENT_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QDebug>
#include <QCoreApplication> // For console applications
#include <QJsonDocument> // For handling JSON responses
#include <QJsonObject>
#include <QSettings>


class ApiClient : public QObject
{
    Q_OBJECT

public:
    explicit ApiClient(QObject *parent = nullptr);

private slots:

private:
    QNetworkAccessManager m_netManager;

};


#endif //HGIT_APICLIENT_H