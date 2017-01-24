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
 * SWGGHResponseCoordinatesArray.h
 * 
 * An array containing coordinates
 */

#ifndef SWGGHResponseCoordinatesArray_H_
#define SWGGHResponseCoordinatesArray_H_

#include <QJsonObject>


#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGGHResponseCoordinatesArray: public SWGObject {
public:
    SWGGHResponseCoordinatesArray();
    SWGGHResponseCoordinatesArray(QString* json);
    virtual ~SWGGHResponseCoordinatesArray();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGGHResponseCoordinatesArray* fromJson(QString &jsonString);


private:
};

} /* namespace Swagger */

#endif /* SWGGHResponseCoordinatesArray_H_ */
