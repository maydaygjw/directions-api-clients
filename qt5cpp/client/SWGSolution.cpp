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


#include "SWGSolution.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGSolution::SWGSolution(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSolution::SWGSolution() {
    init();
}

SWGSolution::~SWGSolution() {
    this->cleanup();
}

void
SWGSolution::init() {
    costs = 0;
    m_costs_isSet = false;
    distance = 0;
    m_distance_isSet = false;
    time = 0L;
    m_time_isSet = false;
    transport_time = 0L;
    m_transport_time_isSet = false;
    max_operation_time = 0L;
    m_max_operation_time_isSet = false;
    waiting_time = 0L;
    m_waiting_time_isSet = false;
    no_vehicles = 0;
    m_no_vehicles_isSet = false;
    no_unassigned = 0;
    m_no_unassigned_isSet = false;
    routes = new QList<SWGRoute*>();
    m_routes_isSet = false;
    unassigned = new SWGSolution_unassigned();
    m_unassigned_isSet = false;
}

void
SWGSolution::cleanup() {








    if(routes != nullptr) { 
        auto arr = routes;
        for(auto o: *arr) { 
            delete o;
        }
        delete routes;
    }
    if(unassigned != nullptr) { 
        delete unassigned;
    }
}

SWGSolution*
SWGSolution::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSolution::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&costs, pJson["costs"], "qint32", "");
    
    ::Swagger::setValue(&distance, pJson["distance"], "qint32", "");
    
    ::Swagger::setValue(&time, pJson["time"], "qint64", "");
    
    ::Swagger::setValue(&transport_time, pJson["transport_time"], "qint64", "");
    
    ::Swagger::setValue(&max_operation_time, pJson["max_operation_time"], "qint64", "");
    
    ::Swagger::setValue(&waiting_time, pJson["waiting_time"], "qint64", "");
    
    ::Swagger::setValue(&no_vehicles, pJson["no_vehicles"], "qint32", "");
    
    ::Swagger::setValue(&no_unassigned, pJson["no_unassigned"], "qint32", "");
    
    
    ::Swagger::setValue(&routes, pJson["routes"], "QList", "SWGRoute");
    ::Swagger::setValue(&unassigned, pJson["unassigned"], "SWGSolution_unassigned", "SWGSolution_unassigned");
    
}

QString
SWGSolution::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSolution::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    if(m_costs_isSet){
        obj->insert("costs", QJsonValue(costs));
    }
    
    if(m_distance_isSet){
        obj->insert("distance", QJsonValue(distance));
    }
    
    if(m_time_isSet){
        obj->insert("time", QJsonValue(time));
    }
    
    if(m_transport_time_isSet){
        obj->insert("transport_time", QJsonValue(transport_time));
    }
    
    if(m_max_operation_time_isSet){
        obj->insert("max_operation_time", QJsonValue(max_operation_time));
    }
    
    if(m_waiting_time_isSet){
        obj->insert("waiting_time", QJsonValue(waiting_time));
    }
    
    if(m_no_vehicles_isSet){
        obj->insert("no_vehicles", QJsonValue(no_vehicles));
    }
    
    if(m_no_unassigned_isSet){
        obj->insert("no_unassigned", QJsonValue(no_unassigned));
    }
    
    if(routes->size() > 0){
        toJsonArray((QList<void*>*)routes, obj, "routes", "SWGRoute");
    }
     
    if((unassigned != nullptr) && (unassigned->isSet())){
        toJsonValue(QString("unassigned"), unassigned, obj, QString("SWGSolution_unassigned"));
    }

    return obj;
}

qint32
SWGSolution::getCosts() {
    return costs;
}
void
SWGSolution::setCosts(qint32 costs) {
    this->costs = costs;
    this->m_costs_isSet = true;
}

qint32
SWGSolution::getDistance() {
    return distance;
}
void
SWGSolution::setDistance(qint32 distance) {
    this->distance = distance;
    this->m_distance_isSet = true;
}

qint64
SWGSolution::getTime() {
    return time;
}
void
SWGSolution::setTime(qint64 time) {
    this->time = time;
    this->m_time_isSet = true;
}

qint64
SWGSolution::getTransportTime() {
    return transport_time;
}
void
SWGSolution::setTransportTime(qint64 transport_time) {
    this->transport_time = transport_time;
    this->m_transport_time_isSet = true;
}

qint64
SWGSolution::getMaxOperationTime() {
    return max_operation_time;
}
void
SWGSolution::setMaxOperationTime(qint64 max_operation_time) {
    this->max_operation_time = max_operation_time;
    this->m_max_operation_time_isSet = true;
}

qint64
SWGSolution::getWaitingTime() {
    return waiting_time;
}
void
SWGSolution::setWaitingTime(qint64 waiting_time) {
    this->waiting_time = waiting_time;
    this->m_waiting_time_isSet = true;
}

qint32
SWGSolution::getNoVehicles() {
    return no_vehicles;
}
void
SWGSolution::setNoVehicles(qint32 no_vehicles) {
    this->no_vehicles = no_vehicles;
    this->m_no_vehicles_isSet = true;
}

qint32
SWGSolution::getNoUnassigned() {
    return no_unassigned;
}
void
SWGSolution::setNoUnassigned(qint32 no_unassigned) {
    this->no_unassigned = no_unassigned;
    this->m_no_unassigned_isSet = true;
}

QList<SWGRoute*>*
SWGSolution::getRoutes() {
    return routes;
}
void
SWGSolution::setRoutes(QList<SWGRoute*>* routes) {
    this->routes = routes;
    this->m_routes_isSet = true;
}

SWGSolution_unassigned*
SWGSolution::getUnassigned() {
    return unassigned;
}
void
SWGSolution::setUnassigned(SWGSolution_unassigned* unassigned) {
    this->unassigned = unassigned;
    this->m_unassigned_isSet = true;
}


bool 
SWGSolution::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_costs_isSet){ isObjectUpdated = true; break;}
        if(m_distance_isSet){ isObjectUpdated = true; break;}
        if(m_time_isSet){ isObjectUpdated = true; break;}
        if(m_transport_time_isSet){ isObjectUpdated = true; break;}
        if(m_max_operation_time_isSet){ isObjectUpdated = true; break;}
        if(m_waiting_time_isSet){ isObjectUpdated = true; break;}
        if(m_no_vehicles_isSet){ isObjectUpdated = true; break;}
        if(m_no_unassigned_isSet){ isObjectUpdated = true; break;}
        if(routes->size() > 0){ isObjectUpdated = true; break;}
        if(unassigned != nullptr && unassigned->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

