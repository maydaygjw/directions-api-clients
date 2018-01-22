/**
 * GraphHopper Directions API
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "SWGVrpApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {

SWGVrpApi::SWGVrpApi() {}

SWGVrpApi::~SWGVrpApi() {}

SWGVrpApi::SWGVrpApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGVrpApi::postVrp(QString* key, SWGRequest& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/vrp/optimize");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("key"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(key)));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "POST");


    
    QString output = body.asJson();
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGVrpApi::postVrpCallback);

    worker->execute(&input);
}

void
SWGVrpApi::postVrpCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    

    QString json(worker->response);
    SWGJobId* output = static_cast<SWGJobId*>(create(json, QString("SWGJobId")));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postVrpSignal(output);
    } else {
        emit postVrpSignalE(output, error_type, error_str);
        emit postVrpSignalEFull(worker, error_type, error_str);
    }
}


}
