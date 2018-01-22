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

/*
 * SWGIsochroneResponse.h
 * 
 * 
 */

#ifndef SWGIsochroneResponse_H_
#define SWGIsochroneResponse_H_

#include <QJsonObject>


#include "SWGIsochroneResponsePolygon.h"
#include <QList>
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGIsochroneResponse: public SWGObject {
public:
    SWGIsochroneResponse();
    SWGIsochroneResponse(QString* json);
    virtual ~SWGIsochroneResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGIsochroneResponse* fromJson(QString &jsonString);

    QList<SWGIsochroneResponsePolygon*>* getPolygons();
    void setPolygons(QList<SWGIsochroneResponsePolygon*>* polygons);

    QList<QString*>* getCopyrights();
    void setCopyrights(QList<QString*>* copyrights);


    virtual bool isSet() override;

private:
    QList<SWGIsochroneResponsePolygon*>* polygons;
    bool m_polygons_isSet;
    
    QList<QString*>* copyrights;
    bool m_copyrights_isSet;
    
};

}

#endif /* SWGIsochroneResponse_H_ */
