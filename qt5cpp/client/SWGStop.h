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

/*
 * SWGStop.h
 * 
 * 
 */

#ifndef SWGStop_H_
#define SWGStop_H_

#include <QJsonObject>


#include "SWGAddress.h"
#include "SWGTimeWindow.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGStop: public SWGObject {
public:
    SWGStop();
    SWGStop(QString* json);
    virtual ~SWGStop();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGStop* fromJson(QString &jsonString);

    SWGAddress* getAddress();
    void setAddress(SWGAddress* address);

    qint64 getDuration();
    void setDuration(qint64 duration);

    QList<SWGTimeWindow*>* getTimeWindows();
    void setTimeWindows(QList<SWGTimeWindow*>* time_windows);


private:
    SWGAddress* address;
    qint64 duration;
    QList<SWGTimeWindow*>* time_windows;
};

} /* namespace Swagger */

#endif /* SWGStop_H_ */
