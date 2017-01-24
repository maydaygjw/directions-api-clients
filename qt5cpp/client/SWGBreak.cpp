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
    latest = 0L;
    duration = 0L;
    max_driving_time = 0L;
    initial_driving_time = 0L;
    possible_split = new QList<qint64>();
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
    
    obj->insert("earliest", QJsonValue(earliest));

    obj->insert("latest", QJsonValue(latest));

    obj->insert("duration", QJsonValue(duration));

    obj->insert("max_driving_time", QJsonValue(max_driving_time));

    obj->insert("initial_driving_time", QJsonValue(initial_driving_time));

    QJsonArray possible_splitJsonArray;
    toJsonArray((QList<void*>*)possible_split, &possible_splitJsonArray, "possible_split", "qint64");
    obj->insert("possible_split", possible_splitJsonArray);

    return obj;
}

qint64
SWGBreak::getEarliest() {
    return earliest;
}
void
SWGBreak::setEarliest(qint64 earliest) {
    this->earliest = earliest;
}

qint64
SWGBreak::getLatest() {
    return latest;
}
void
SWGBreak::setLatest(qint64 latest) {
    this->latest = latest;
}

qint64
SWGBreak::getDuration() {
    return duration;
}
void
SWGBreak::setDuration(qint64 duration) {
    this->duration = duration;
}

qint64
SWGBreak::getMaxDrivingTime() {
    return max_driving_time;
}
void
SWGBreak::setMaxDrivingTime(qint64 max_driving_time) {
    this->max_driving_time = max_driving_time;
}

qint64
SWGBreak::getInitialDrivingTime() {
    return initial_driving_time;
}
void
SWGBreak::setInitialDrivingTime(qint64 initial_driving_time) {
    this->initial_driving_time = initial_driving_time;
}

QList<qint64>*
SWGBreak::getPossibleSplit() {
    return possible_split;
}
void
SWGBreak::setPossibleSplit(QList<qint64>* possible_split) {
    this->possible_split = possible_split;
}



} /* namespace Swagger */

