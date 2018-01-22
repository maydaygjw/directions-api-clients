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


#include "SWGIsochroneResponsePolygon.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGIsochroneResponsePolygon::SWGIsochroneResponsePolygon(QString* json) {
    init();
    this->fromJson(*json);
}

SWGIsochroneResponsePolygon::SWGIsochroneResponsePolygon() {
    init();
}

SWGIsochroneResponsePolygon::~SWGIsochroneResponsePolygon() {
    this->cleanup();
}

void
SWGIsochroneResponsePolygon::init() {
    properties = new SWGIsochroneResponsePolygon_properties();
    m_properties_isSet = false;
    type = new QString("");
    m_type_isSet = false;
    geometry = new SWGIsochroneResponsePolygon_geometry();
    m_geometry_isSet = false;
}

void
SWGIsochroneResponsePolygon::cleanup() {
    if(properties != nullptr) { 
        delete properties;
    }
    if(type != nullptr) { 
        delete type;
    }
    if(geometry != nullptr) { 
        delete geometry;
    }
}

SWGIsochroneResponsePolygon*
SWGIsochroneResponsePolygon::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGIsochroneResponsePolygon::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&properties, pJson["properties"], "SWGIsochroneResponsePolygon_properties", "SWGIsochroneResponsePolygon_properties");
    
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    
    ::Swagger::setValue(&geometry, pJson["geometry"], "SWGIsochroneResponsePolygon_geometry", "SWGIsochroneResponsePolygon_geometry");
    
}

QString
SWGIsochroneResponsePolygon::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGIsochroneResponsePolygon::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
     
    if((properties != nullptr) && (properties->isSet())){
        toJsonValue(QString("properties"), properties, obj, QString("SWGIsochroneResponsePolygon_properties"));
    }
    
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }
     
    if((geometry != nullptr) && (geometry->isSet())){
        toJsonValue(QString("geometry"), geometry, obj, QString("SWGIsochroneResponsePolygon_geometry"));
    }

    return obj;
}

SWGIsochroneResponsePolygon_properties*
SWGIsochroneResponsePolygon::getProperties() {
    return properties;
}
void
SWGIsochroneResponsePolygon::setProperties(SWGIsochroneResponsePolygon_properties* properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

QString*
SWGIsochroneResponsePolygon::getType() {
    return type;
}
void
SWGIsochroneResponsePolygon::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}

SWGIsochroneResponsePolygon_geometry*
SWGIsochroneResponsePolygon::getGeometry() {
    return geometry;
}
void
SWGIsochroneResponsePolygon::setGeometry(SWGIsochroneResponsePolygon_geometry* geometry) {
    this->geometry = geometry;
    this->m_geometry_isSet = true;
}


bool 
SWGIsochroneResponsePolygon::isSet(){
    bool isObjectUpdated = false;
    do{
        if(properties != nullptr && properties->isSet()){ isObjectUpdated = true; break;}
        if(type != nullptr && *type != QString("")){ isObjectUpdated = true; break;}
        if(geometry != nullptr && geometry->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

