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

package io.swagger.client.model


case class Stop (
  address: Option[Address] = None,
  // duration of stop, i.e. time in ms the corresponding activity takes
  duration: Option[Long] = None,
  // preparation time of service, e.g. search for a parking space. it only falls due if the location of previous activity differs from this location
  preparationTime: Option[Long] = None,
  // array of time windows. currently, only a single time window is allowed
  timeWindows: Option[List[TimeWindow]] = None
)

