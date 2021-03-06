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

/*
 * SWGSolution.h
 * 
 * 
 */

#ifndef SWGSolution_H_
#define SWGSolution_H_

#include <QJsonObject>


#include "SWGRoute.h"
#include "SWGSolution_unassigned.h"
#include <QList>

#include "SWGObject.h"

namespace Swagger {

class SWGSolution: public SWGObject {
public:
    SWGSolution();
    SWGSolution(QString* json);
    virtual ~SWGSolution();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSolution* fromJson(QString &jsonString);

    qint32 getCosts();
    void setCosts(qint32 costs);

    qint32 getDistance();
    void setDistance(qint32 distance);

    qint64 getTime();
    void setTime(qint64 time);

    qint64 getTransportTime();
    void setTransportTime(qint64 transport_time);

    qint64 getMaxOperationTime();
    void setMaxOperationTime(qint64 max_operation_time);

    qint64 getWaitingTime();
    void setWaitingTime(qint64 waiting_time);

    qint32 getNoVehicles();
    void setNoVehicles(qint32 no_vehicles);

    qint32 getNoUnassigned();
    void setNoUnassigned(qint32 no_unassigned);

    QList<SWGRoute*>* getRoutes();
    void setRoutes(QList<SWGRoute*>* routes);

    SWGSolution_unassigned* getUnassigned();
    void setUnassigned(SWGSolution_unassigned* unassigned);


    virtual bool isSet() override;

private:
    qint32 costs;
    bool m_costs_isSet;
    
    qint32 distance;
    bool m_distance_isSet;
    
    qint64 time;
    bool m_time_isSet;
    
    qint64 transport_time;
    bool m_transport_time_isSet;
    
    qint64 max_operation_time;
    bool m_max_operation_time_isSet;
    
    qint64 waiting_time;
    bool m_waiting_time_isSet;
    
    qint32 no_vehicles;
    bool m_no_vehicles_isSet;
    
    qint32 no_unassigned;
    bool m_no_unassigned_isSet;
    
    QList<SWGRoute*>* routes;
    bool m_routes_isSet;
    
    SWGSolution_unassigned* unassigned;
    bool m_unassigned_isSet;
    
};

}

#endif /* SWGSolution_H_ */
