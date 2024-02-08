#ifndef API_REQUEST_H
#define API_REQUEST_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
class Api_request
{
public:
    Api_request();
    QStringList request_api(QString str,int max_res);
    bool parse_response(QByteArray response ,QStringList& words);
};

#endif // API_REQUEST_H
