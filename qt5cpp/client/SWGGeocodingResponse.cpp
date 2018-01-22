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


#include "SWGGeocodingResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGGeocodingResponse::SWGGeocodingResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGeocodingResponse::SWGGeocodingResponse() {
    init();
}

SWGGeocodingResponse::~SWGGeocodingResponse() {
    this->cleanup();
}

void
SWGGeocodingResponse::init() {
    hits = new QList<SWGGeocodingLocation*>();
    m_hits_isSet = false;
    locale = new QString("");
    m_locale_isSet = false;
}

void
SWGGeocodingResponse::cleanup() {
    if(hits != nullptr) { 
        auto arr = hits;
        for(auto o: *arr) { 
            delete o;
        }
        delete hits;
    }
    if(locale != nullptr) { 
        delete locale;
    }
}

SWGGeocodingResponse*
SWGGeocodingResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGeocodingResponse::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&hits, pJson["hits"], "QList", "SWGGeocodingLocation");
    ::Swagger::setValue(&locale, pJson["locale"], "QString", "QString");
    
}

QString
SWGGeocodingResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGeocodingResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    if(hits->size() > 0){
        toJsonArray((QList<void*>*)hits, obj, "hits", "SWGGeocodingLocation");
    }
    
    if(locale != nullptr && *locale != QString("")){
        toJsonValue(QString("locale"), locale, obj, QString("QString"));
    }

    return obj;
}

QList<SWGGeocodingLocation*>*
SWGGeocodingResponse::getHits() {
    return hits;
}
void
SWGGeocodingResponse::setHits(QList<SWGGeocodingLocation*>* hits) {
    this->hits = hits;
    this->m_hits_isSet = true;
}

QString*
SWGGeocodingResponse::getLocale() {
    return locale;
}
void
SWGGeocodingResponse::setLocale(QString* locale) {
    this->locale = locale;
    this->m_locale_isSet = true;
}


bool 
SWGGeocodingResponse::isSet(){
    bool isObjectUpdated = false;
    do{
        if(hits->size() > 0){ isObjectUpdated = true; break;}
        if(locale != nullptr && *locale != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

