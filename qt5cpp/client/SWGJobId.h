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
 * SWGJobId.h
 * 
 * 
 */

#ifndef SWGJobId_H_
#define SWGJobId_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGJobId: public SWGObject {
public:
    SWGJobId();
    SWGJobId(QString* json);
    virtual ~SWGJobId();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGJobId* fromJson(QString &jsonString);

    QString* getJobId();
    void setJobId(QString* job_id);


private:
    QString* job_id;
};

} /* namespace Swagger */

#endif /* SWGJobId_H_ */
