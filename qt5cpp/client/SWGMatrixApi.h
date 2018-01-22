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

#ifndef _SWG_SWGMatrixApi_H_
#define _SWG_SWGMatrixApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGGHError.h"
#include "SWGMatrixRequest.h"
#include "SWGMatrixResponse.h"

#include <QObject>

namespace Swagger {

class SWGMatrixApi: public QObject {
    Q_OBJECT

public:
    SWGMatrixApi();
    SWGMatrixApi(QString host, QString basePath);
    ~SWGMatrixApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void matrixGet(QString* key, QList<QString*>* point, QString* from_point, QString* to_point, QList<QString*>* out_array, QString* vehicle);
    void matrixPost(QString* key, SWGMatrixRequest& body);
    
private:
    void matrixGetCallback (SWGHttpRequestWorker * worker);
    void matrixPostCallback (SWGHttpRequestWorker * worker);
    
signals:
    void matrixGetSignal(SWGMatrixResponse* summary);
    void matrixPostSignal(SWGMatrixResponse* summary);
    
    void matrixGetSignalE(SWGMatrixResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void matrixPostSignalE(SWGMatrixResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void matrixGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void matrixPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
