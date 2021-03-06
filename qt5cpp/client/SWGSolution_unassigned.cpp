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


#include "SWGSolution_unassigned.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGSolution_unassigned::SWGSolution_unassigned(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSolution_unassigned::SWGSolution_unassigned() {
    init();
}

SWGSolution_unassigned::~SWGSolution_unassigned() {
    this->cleanup();
}

void
SWGSolution_unassigned::init() {
    services = new QList<QString*>();
    m_services_isSet = false;
    shipments = new QList<QString*>();
    m_shipments_isSet = false;
}

void
SWGSolution_unassigned::cleanup() {
    if(services != nullptr) { 
        auto arr = services;
        for(auto o: *arr) { 
            delete o;
        }
        delete services;
    }
    if(shipments != nullptr) { 
        auto arr = shipments;
        for(auto o: *arr) { 
            delete o;
        }
        delete shipments;
    }
}

SWGSolution_unassigned*
SWGSolution_unassigned::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSolution_unassigned::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&services, pJson["services"], "QList", "QString");
    
    ::Swagger::setValue(&shipments, pJson["shipments"], "QList", "QString");
}

QString
SWGSolution_unassigned::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSolution_unassigned::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    if(services->size() > 0){
        toJsonArray((QList<void*>*)services, obj, "services", "QString");
    }
    
    if(shipments->size() > 0){
        toJsonArray((QList<void*>*)shipments, obj, "shipments", "QString");
    }

    return obj;
}

QList<QString*>*
SWGSolution_unassigned::getServices() {
    return services;
}
void
SWGSolution_unassigned::setServices(QList<QString*>* services) {
    this->services = services;
    this->m_services_isSet = true;
}

QList<QString*>*
SWGSolution_unassigned::getShipments() {
    return shipments;
}
void
SWGSolution_unassigned::setShipments(QList<QString*>* shipments) {
    this->shipments = shipments;
    this->m_shipments_isSet = true;
}


bool 
SWGSolution_unassigned::isSet(){
    bool isObjectUpdated = false;
    do{
        if(services->size() > 0){ isObjectUpdated = true; break;}
        if(shipments->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

