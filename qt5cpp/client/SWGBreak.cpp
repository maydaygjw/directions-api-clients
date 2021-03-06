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


#include "SWGBreak.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGBreak::SWGBreak(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBreak::SWGBreak() {
    init();
}

SWGBreak::~SWGBreak() {
    this->cleanup();
}

void
SWGBreak::init() {
    earliest = 0L;
    m_earliest_isSet = false;
    latest = 0L;
    m_latest_isSet = false;
    duration = 0L;
    m_duration_isSet = false;
    max_driving_time = 0L;
    m_max_driving_time_isSet = false;
    initial_driving_time = 0L;
    m_initial_driving_time_isSet = false;
    possible_split = new QList<qint64>();
    m_possible_split_isSet = false;
}

void
SWGBreak::cleanup() {






}

SWGBreak*
SWGBreak::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBreak::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&earliest, pJson["earliest"], "qint64", "");
    
    ::Swagger::setValue(&latest, pJson["latest"], "qint64", "");
    
    ::Swagger::setValue(&duration, pJson["duration"], "qint64", "");
    
    ::Swagger::setValue(&max_driving_time, pJson["max_driving_time"], "qint64", "");
    
    ::Swagger::setValue(&initial_driving_time, pJson["initial_driving_time"], "qint64", "");
    
    
    ::Swagger::setValue(&possible_split, pJson["possible_split"], "QList", "qint64");
}

QString
SWGBreak::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGBreak::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    if(m_earliest_isSet){
        obj->insert("earliest", QJsonValue(earliest));
    }
    
    if(m_latest_isSet){
        obj->insert("latest", QJsonValue(latest));
    }
    
    if(m_duration_isSet){
        obj->insert("duration", QJsonValue(duration));
    }
    
    if(m_max_driving_time_isSet){
        obj->insert("max_driving_time", QJsonValue(max_driving_time));
    }
    
    if(m_initial_driving_time_isSet){
        obj->insert("initial_driving_time", QJsonValue(initial_driving_time));
    }
    
    if(possible_split->size() > 0){
        toJsonArray((QList<void*>*)possible_split, obj, "possible_split", "");
    }

    return obj;
}

qint64
SWGBreak::getEarliest() {
    return earliest;
}
void
SWGBreak::setEarliest(qint64 earliest) {
    this->earliest = earliest;
    this->m_earliest_isSet = true;
}

qint64
SWGBreak::getLatest() {
    return latest;
}
void
SWGBreak::setLatest(qint64 latest) {
    this->latest = latest;
    this->m_latest_isSet = true;
}

qint64
SWGBreak::getDuration() {
    return duration;
}
void
SWGBreak::setDuration(qint64 duration) {
    this->duration = duration;
    this->m_duration_isSet = true;
}

qint64
SWGBreak::getMaxDrivingTime() {
    return max_driving_time;
}
void
SWGBreak::setMaxDrivingTime(qint64 max_driving_time) {
    this->max_driving_time = max_driving_time;
    this->m_max_driving_time_isSet = true;
}

qint64
SWGBreak::getInitialDrivingTime() {
    return initial_driving_time;
}
void
SWGBreak::setInitialDrivingTime(qint64 initial_driving_time) {
    this->initial_driving_time = initial_driving_time;
    this->m_initial_driving_time_isSet = true;
}

QList<qint64>*
SWGBreak::getPossibleSplit() {
    return possible_split;
}
void
SWGBreak::setPossibleSplit(QList<qint64>* possible_split) {
    this->possible_split = possible_split;
    this->m_possible_split_isSet = true;
}


bool 
SWGBreak::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_earliest_isSet){ isObjectUpdated = true; break;}
        if(m_latest_isSet){ isObjectUpdated = true; break;}
        if(m_duration_isSet){ isObjectUpdated = true; break;}
        if(m_max_driving_time_isSet){ isObjectUpdated = true; break;}
        if(m_initial_driving_time_isSet){ isObjectUpdated = true; break;}
        if(m_possible_split_isSet){ isObjectUpdated = true; break;}if(possible_split->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

