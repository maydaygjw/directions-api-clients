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


private:
    qint32 costs;
    qint32 distance;
    qint64 time;
    qint64 transport_time;
    qint64 max_operation_time;
    qint64 waiting_time;
    qint32 no_vehicles;
    qint32 no_unassigned;
    QList<SWGRoute*>* routes;
    SWGSolution_unassigned* unassigned;
};

} /* namespace Swagger */

#endif /* SWGSolution_H_ */
