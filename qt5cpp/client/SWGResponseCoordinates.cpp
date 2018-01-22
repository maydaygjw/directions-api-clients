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


#include "SWGResponseCoordinates.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGResponseCoordinates::SWGResponseCoordinates(QString* json) {
    init();
    this->fromJson(*json);
}

SWGResponseCoordinates::SWGResponseCoordinates() {
    init();
}

SWGResponseCoordinates::~SWGResponseCoordinates() {
    this->cleanup();
}

void
SWGResponseCoordinates::init() {
    coordinates = new SWGResponseCoordinatesArray();
    m_coordinates_isSet = false;
}

void
SWGResponseCoordinates::cleanup() {
    if(coordinates != nullptr) { 
        delete coordinates;
    }
}

SWGResponseCoordinates*
SWGResponseCoordinates::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGResponseCoordinates::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&coordinates, pJson["coordinates"], "SWGResponseCoordinatesArray", "SWGResponseCoordinatesArray");
    
}

QString
SWGResponseCoordinates::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGResponseCoordinates::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
     
    if((coordinates != nullptr) && (coordinates->isSet())){
        toJsonValue(QString("coordinates"), coordinates, obj, QString("SWGResponseCoordinatesArray"));
    }

    return obj;
}

SWGResponseCoordinatesArray*
SWGResponseCoordinates::getCoordinates() {
    return coordinates;
}
void
SWGResponseCoordinates::setCoordinates(SWGResponseCoordinatesArray* coordinates) {
    this->coordinates = coordinates;
    this->m_coordinates_isSet = true;
}


bool 
SWGResponseCoordinates::isSet(){
    bool isObjectUpdated = false;
    do{
        if(coordinates != nullptr && coordinates->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

