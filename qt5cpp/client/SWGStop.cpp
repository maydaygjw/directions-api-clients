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


#include "SWGStop.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGStop::SWGStop(QString* json) {
    init();
    this->fromJson(*json);
}

SWGStop::SWGStop() {
    init();
}

SWGStop::~SWGStop() {
    this->cleanup();
}

void
SWGStop::init() {
    address = new SWGAddress();
    duration = 0L;
    time_windows = new QList<SWGTimeWindow*>();
}

void
SWGStop::cleanup() {
    
    if(address != nullptr) {
        delete address;
    }


    if(time_windows != nullptr) {
        QList<SWGTimeWindow*>* arr = time_windows;
        foreach(SWGTimeWindow* o, *arr) {
            delete o;
        }
        delete time_windows;
    }
}

SWGStop*
SWGStop::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGStop::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&address, pJson["address"], "SWGAddress", "SWGAddress");
    ::Swagger::setValue(&duration, pJson["duration"], "qint64", "");
    
    ::Swagger::setValue(&time_windows, pJson["time_windows"], "QList", "SWGTimeWindow");
    
}

QString
SWGStop::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGStop::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("address"), address, obj, QString("SWGAddress"));

    obj->insert("duration", QJsonValue(duration));

    QJsonArray time_windowsJsonArray;
    toJsonArray((QList<void*>*)time_windows, &time_windowsJsonArray, "time_windows", "SWGTimeWindow");
    obj->insert("time_windows", time_windowsJsonArray);

    return obj;
}

SWGAddress*
SWGStop::getAddress() {
    return address;
}
void
SWGStop::setAddress(SWGAddress* address) {
    this->address = address;
}

qint64
SWGStop::getDuration() {
    return duration;
}
void
SWGStop::setDuration(qint64 duration) {
    this->duration = duration;
}

QList<SWGTimeWindow*>*
SWGStop::getTimeWindows() {
    return time_windows;
}
void
SWGStop::setTimeWindows(QList<SWGTimeWindow*>* time_windows) {
    this->time_windows = time_windows;
}



} /* namespace Swagger */

