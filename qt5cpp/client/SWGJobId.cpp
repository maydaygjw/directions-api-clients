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


#include "SWGJobId.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGJobId::SWGJobId(QString* json) {
    init();
    this->fromJson(*json);
}

SWGJobId::SWGJobId() {
    init();
}

SWGJobId::~SWGJobId() {
    this->cleanup();
}

void
SWGJobId::init() {
    job_id = new QString("");
    m_job_id_isSet = false;
}

void
SWGJobId::cleanup() {
    if(job_id != nullptr) { 
        delete job_id;
    }
}

SWGJobId*
SWGJobId::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGJobId::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&job_id, pJson["job_id"], "QString", "QString");
    
}

QString
SWGJobId::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGJobId::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    if(job_id != nullptr && *job_id != QString("")){
        toJsonValue(QString("job_id"), job_id, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGJobId::getJobId() {
    return job_id;
}
void
SWGJobId::setJobId(QString* job_id) {
    this->job_id = job_id;
    this->m_job_id_isSet = true;
}


bool 
SWGJobId::isSet(){
    bool isObjectUpdated = false;
    do{
        if(job_id != nullptr && *job_id != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

