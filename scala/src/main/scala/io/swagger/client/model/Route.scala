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

package io.swagger.client.model


case class Route (
  /* id of vehicle that operates route */
  vehicleId: String,
  /* distance of route in meter */
  distance: Long,
  /* transport time of route in ms */
  transportTime: Long,
  /* completion time of route in ms */
  completionTime: Long,
  /* waiting time of route in ms */
  waitingTime: Long,
  /* array of activities */
  activities: List[Activity]
)
