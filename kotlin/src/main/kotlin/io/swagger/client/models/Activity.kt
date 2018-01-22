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
package io.swagger.client.models


/**
 * 
 * @param type type of activity
 * @param id id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to
 * @param location_id id that refers to address
 * @param arr_time arrival time at this activity in ms
 * @param end_time end time of and thus departure time at this activity
 * @param waiting_time waiting time at this activity in ms
 * @param distance cumulated distance from start to this activity in m
 * @param driving_time driving time of driver in ms
 * @param load_before Array with size/capacity dimensions before this activity
 * @param load_after Array with size/capacity dimensions after this activity
 */
data class Activity (
    /* type of activity */
    val type: Activity.Type? = null,
    /* id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to */
    val id: kotlin.String? = null,
    /* id that refers to address */
    val location_id: kotlin.String? = null,
    /* arrival time at this activity in ms */
    val arr_time: kotlin.Long? = null,
    /* end time of and thus departure time at this activity */
    val end_time: kotlin.Long? = null,
    /* waiting time at this activity in ms */
    val waiting_time: kotlin.Long? = null,
    /* cumulated distance from start to this activity in m */
    val distance: kotlin.Long? = null,
    /* driving time of driver in ms */
    val driving_time: kotlin.Long? = null,
    /* Array with size/capacity dimensions before this activity */
    val load_before: kotlin.Array<kotlin.Int>? = null,
    /* Array with size/capacity dimensions after this activity */
    val load_after: kotlin.Array<kotlin.Int>? = null
) {

    /**
    * type of activity
    * Values: start,end,service,pickupShipment,deliverShipment,pickup,delivery,`break`
    */
    enum class Type(val value: kotlin.Any){
    
        start("start"),
    
        end("end"),
    
        service("service"),
    
        pickupShipment("pickupShipment"),
    
        deliverShipment("deliverShipment"),
    
        pickup("pickup"),
    
        delivery("delivery"),
    
        `break`("break");
    
    }

}

