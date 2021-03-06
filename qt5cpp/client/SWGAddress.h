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
 * SWGAddress.h
 * 
 * 
 */

#ifndef SWGAddress_H_
#define SWGAddress_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGAddress: public SWGObject {
public:
    SWGAddress();
    SWGAddress(QString* json);
    virtual ~SWGAddress();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAddress* fromJson(QString &jsonString);

    QString* getLocationId();
    void setLocationId(QString* location_id);

    QString* getName();
    void setName(QString* name);

    double getLon();
    void setLon(double lon);

    double getLat();
    void setLat(double lat);


    virtual bool isSet() override;

private:
    QString* location_id;
    bool m_location_id_isSet;
    
    QString* name;
    bool m_name_isSet;
    
    double lon;
    bool m_lon_isSet;
    
    double lat;
    bool m_lat_isSet;
    
};

}

#endif /* SWGAddress_H_ */
