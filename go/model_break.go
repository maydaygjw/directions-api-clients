/*
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * API version: 1.0.0
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package graphhopper

type ModelBreak struct {
	// earliest start of break
	Earliest int64 `json:"earliest,omitempty"`

	// latest start of break
	Latest int64 `json:"latest,omitempty"`

	// duration of break
	Duration int64 `json:"duration,omitempty"`

	// max driving time without break
	MaxDrivingTime int64 `json:"max_driving_time,omitempty"`

	// initial driving time, i.e. the time your driver has already spent for driving
	InitialDrivingTime int64 `json:"initial_driving_time,omitempty"`

	// array of splits
	PossibleSplit []int64 `json:"possible_split,omitempty"`
}
