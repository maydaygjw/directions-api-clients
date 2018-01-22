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


#include "SWGCostMatrix_data.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGCostMatrix_data::SWGCostMatrix_data(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCostMatrix_data::SWGCostMatrix_data() {
    init();
}

SWGCostMatrix_data::~SWGCostMatrix_data() {
    this->cleanup();
}

void
SWGCostMatrix_data::init() {
    times = new QList<QList<qint64>*>();
    m_times_isSet = false;
    distances = new QList<QList<double>*>();
    m_distances_isSet = false;
    info = new SWGCostMatrix_data_info();
    m_info_isSet = false;
}

void
SWGCostMatrix_data::cleanup() {
    if(times != nullptr) { 
        auto arr = times;
        for(auto o: *arr) { 
            for(auto o1: *o) {                
                delete o1;
            }
            delete o;
        }
        delete times;
    }
    if(distances != nullptr) { 
        auto arr = distances;
        for(auto o: *arr) { 
            for(auto o1: *o) {                
                delete o1;
            }
            delete o;
        }
        delete distances;
    }
    if(info != nullptr) { 
        delete info;
    }
}

SWGCostMatrix_data*
SWGCostMatrix_data::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCostMatrix_data::fromJsonObject(QJsonObject &pJson) {
    
    
    if(pJson["times"].isArray()){
        auto arr = pJson["times"].toArray();
        for (const QJsonValue & jval : arr) {
            auto times_item = new QList<qint64>();
            
            auto jsonval = jval.toObject();
            ::Swagger::setValue(times_item, jsonval, "QList", "qint64"); 
            times->push_back(times_item);
        }
    }
    
    
    if(pJson["distances"].isArray()){
        auto arr = pJson["distances"].toArray();
        for (const QJsonValue & jval : arr) {
            auto distances_item = new QList<double>();
            
            auto jsonval = jval.toObject();
            ::Swagger::setValue(distances_item, jsonval, "QList", "double"); 
            distances->push_back(distances_item);
        }
    }
    ::Swagger::setValue(&info, pJson["info"], "SWGCostMatrix_data_info", "SWGCostMatrix_data_info");
    
}

QString
SWGCostMatrix_data::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCostMatrix_data::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    if(times->size() > 0){
        
        QJsonArray jarray;
        for(auto items : *times){
            QJsonObject jobj;
            toJsonArray((QList<void*>*)items, &jobj, "times", "qint64");
            
            jarray.append(jobj.value("times"));
        }
        obj->insert("times", jarray);
    }
    
    if(distances->size() > 0){
        
        QJsonArray jarray;
        for(auto items : *distances){
            QJsonObject jobj;
            toJsonArray((QList<void*>*)items, &jobj, "distances", "double");
            
            jarray.append(jobj.value("distances"));
        }
        obj->insert("distances", jarray);
    }
     
    if((info != nullptr) && (info->isSet())){
        toJsonValue(QString("info"), info, obj, QString("SWGCostMatrix_data_info"));
    }

    return obj;
}

QList<QList<qint64>*>*
SWGCostMatrix_data::getTimes() {
    return times;
}
void
SWGCostMatrix_data::setTimes(QList<QList<qint64>*>* times) {
    this->times = times;
    this->m_times_isSet = true;
}

QList<QList<double>*>*
SWGCostMatrix_data::getDistances() {
    return distances;
}
void
SWGCostMatrix_data::setDistances(QList<QList<double>*>* distances) {
    this->distances = distances;
    this->m_distances_isSet = true;
}

SWGCostMatrix_data_info*
SWGCostMatrix_data::getInfo() {
    return info;
}
void
SWGCostMatrix_data::setInfo(SWGCostMatrix_data_info* info) {
    this->info = info;
    this->m_info_isSet = true;
}


bool 
SWGCostMatrix_data::isSet(){
    bool isObjectUpdated = false;
    do{
        if(times->size() > 0){ isObjectUpdated = true; break;}
        if(distances->size() > 0){ isObjectUpdated = true; break;}
        if(info != nullptr && info->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

