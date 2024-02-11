#include "api_request.h"

Api_request::Api_request()
{

}

QStringList Api_request::request_api(QString str,int max_res,QString lang )
{
    QStringList words;

    QNetworkAccessManager manager;
    QString url_str = QString ("http://api.datamuse.com/words?ml=%1&v=%2&d=1&max=%3").arg(str).arg(lang).arg(max_res);
    QUrl url =QUrl(url_str);
    // Create a network request for the API endpoint
    QNetworkRequest request(url);

    // Perform the GET request
    QNetworkReply *reply = manager.get(request);

    // Wait for the reply to finish
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    // Check for errors
    if (reply->error() != QNetworkReply::NoError) {
        qDebug() << "Error:" << reply->errorString();
        return words;
    }

    // Read the response data
    QByteArray responseData = reply->readAll();

    // Process the response data
    qDebug() << "Response:" << responseData;

    // Clean up
    reply->deleteLater();
    bool state = parse_response(responseData,words);
    qDebug()<<words;
    if (state)
    {

        return words;
    }
    return words;
}

bool Api_request::parse_response(QByteArray response,QStringList& words)
{
    qDebug() << "Response:" << response;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
    if (jsonDoc.isNull()) {
        qDebug() << "Error: Failed to parse JSON data";
        return false ;
    }

    // Check if the JSON data is an array
    if (!jsonDoc.isArray()) {
        qDebug() << "Error: JSON data is not an array";

        return false;
    }

    // Get the JSON array
    QJsonArray jsonArray = jsonDoc.array();

    // Extract data where the key is "word"

    for (const QJsonValue &value : jsonArray) {
        QJsonObject obj = value.toObject();
        if (obj.contains("word")) {
            QString word = obj["word"].toString();
            words.append(word);
        }
    }
    return true;

}
