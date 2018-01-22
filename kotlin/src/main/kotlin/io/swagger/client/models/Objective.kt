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
 * @param type type of objective function, i.e. min or min-max 
 * @param value objective function value
 */
data class Objective (
    /* type of objective function, i.e. min or min-max  */
    val type: Objective.Type? = null,
    /* objective function value */
    val value: Objective.Value? = null
) {

    /**
    * type of objective function, i.e. min or min-max 
    * Values: min,minMinusmax
    */
    enum class Type(val value: kotlin.Any){
    
        min("min"),
    
        minMinusmax("min-max");
    
    }

    /**
    * objective function value
    * Values: completionTime,transportTime,vehicles
    */
    enum class Value(val value: kotlin.Any){
    
        completionTime("completion_time"),
    
        transportTime("transport_time"),
    
        vehicles("vehicles");
    
    }

}

