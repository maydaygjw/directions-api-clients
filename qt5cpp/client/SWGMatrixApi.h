/**
 * GraphHopper Directions API
 * With the GraphHopper Directions API you get reliable and fast web services for routing and more with world wide coverage. We offer A-to-B routing via the Routing API optionally with turn instructions and elevation data as well as route optimization with various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API. 
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
#include "SWGGHMatrixRequest.h"
#include "SWGGHMatrixResponse.h"

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

    void matrixGet(QString* key, QList<QString*>* point, QString* from_point, QString* to_point, QList<QString*>* out_array, QString* vehicle);
    void matrixPost(QString* key, SWGGHMatrixRequest body);
    
private:
    void matrixGetCallback (HttpRequestWorker * worker);
    void matrixPostCallback (HttpRequestWorker * worker);
    
signals:
    void matrixGetSignal(SWGGHMatrixResponse* summary);
    void matrixPostSignal(SWGGHMatrixResponse* summary);
    
};
}
#endif
