/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

/// RouteResponsePath : A found path

#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct RouteResponsePath {
  /// The total distance of the route, in meter
  #[serde(rename = "distance")]
  distance: Option<f64>,
  /// The total time of the route, in ms
  #[serde(rename = "time")]
  time: Option<i64>,
  #[serde(rename = "ascend")]
  ascend: Option<f64>,
  /// The total descend (downhill) of the route, in meter
  #[serde(rename = "descend")]
  descend: Option<f64>,
  #[serde(rename = "points")]
  points: Option<::models::ResponseCoordinates>,
  /// Is true if the points are encoded, if not paths[0].points contains the geo json of the path (then order is lon,lat,elevation), which is easier to handle but consumes more bandwidth compared to encoded version
  #[serde(rename = "points_encoded")]
  points_encoded: Option<bool>,
  /// The bounding box of the route, format <br> minLon, minLat, maxLon, maxLat
  #[serde(rename = "bbox")]
  bbox: Option<Vec<f64>>,
  #[serde(rename = "snapped_waypoints")]
  snapped_waypoints: Option<::models::ResponseCoordinates>,
  #[serde(rename = "instructions")]
  instructions: Option<::models::ResponseInstructions>
}

impl RouteResponsePath {
  /// A found path
  pub fn new() -> RouteResponsePath {
    RouteResponsePath {
      distance: None,
      time: None,
      ascend: None,
      descend: None,
      points: None,
      points_encoded: None,
      bbox: None,
      snapped_waypoints: None,
      instructions: None
    }
  }

  pub fn set_distance(&mut self, distance: f64) {
    self.distance = Some(distance);
  }

  pub fn with_distance(mut self, distance: f64) -> RouteResponsePath {
    self.distance = Some(distance);
    self
  }

  pub fn distance(&self) -> Option<&f64> {
    self.distance.as_ref()
  }

  pub fn reset_distance(&mut self) {
    self.distance = None;
  }

  pub fn set_time(&mut self, time: i64) {
    self.time = Some(time);
  }

  pub fn with_time(mut self, time: i64) -> RouteResponsePath {
    self.time = Some(time);
    self
  }

  pub fn time(&self) -> Option<&i64> {
    self.time.as_ref()
  }

  pub fn reset_time(&mut self) {
    self.time = None;
  }

  pub fn set_ascend(&mut self, ascend: f64) {
    self.ascend = Some(ascend);
  }

  pub fn with_ascend(mut self, ascend: f64) -> RouteResponsePath {
    self.ascend = Some(ascend);
    self
  }

  pub fn ascend(&self) -> Option<&f64> {
    self.ascend.as_ref()
  }

  pub fn reset_ascend(&mut self) {
    self.ascend = None;
  }

  pub fn set_descend(&mut self, descend: f64) {
    self.descend = Some(descend);
  }

  pub fn with_descend(mut self, descend: f64) -> RouteResponsePath {
    self.descend = Some(descend);
    self
  }

  pub fn descend(&self) -> Option<&f64> {
    self.descend.as_ref()
  }

  pub fn reset_descend(&mut self) {
    self.descend = None;
  }

  pub fn set_points(&mut self, points: ::models::ResponseCoordinates) {
    self.points = Some(points);
  }

  pub fn with_points(mut self, points: ::models::ResponseCoordinates) -> RouteResponsePath {
    self.points = Some(points);
    self
  }

  pub fn points(&self) -> Option<&::models::ResponseCoordinates> {
    self.points.as_ref()
  }

  pub fn reset_points(&mut self) {
    self.points = None;
  }

  pub fn set_points_encoded(&mut self, points_encoded: bool) {
    self.points_encoded = Some(points_encoded);
  }

  pub fn with_points_encoded(mut self, points_encoded: bool) -> RouteResponsePath {
    self.points_encoded = Some(points_encoded);
    self
  }

  pub fn points_encoded(&self) -> Option<&bool> {
    self.points_encoded.as_ref()
  }

  pub fn reset_points_encoded(&mut self) {
    self.points_encoded = None;
  }

  pub fn set_bbox(&mut self, bbox: Vec<f64>) {
    self.bbox = Some(bbox);
  }

  pub fn with_bbox(mut self, bbox: Vec<f64>) -> RouteResponsePath {
    self.bbox = Some(bbox);
    self
  }

  pub fn bbox(&self) -> Option<&Vec<f64>> {
    self.bbox.as_ref()
  }

  pub fn reset_bbox(&mut self) {
    self.bbox = None;
  }

  pub fn set_snapped_waypoints(&mut self, snapped_waypoints: ::models::ResponseCoordinates) {
    self.snapped_waypoints = Some(snapped_waypoints);
  }

  pub fn with_snapped_waypoints(mut self, snapped_waypoints: ::models::ResponseCoordinates) -> RouteResponsePath {
    self.snapped_waypoints = Some(snapped_waypoints);
    self
  }

  pub fn snapped_waypoints(&self) -> Option<&::models::ResponseCoordinates> {
    self.snapped_waypoints.as_ref()
  }

  pub fn reset_snapped_waypoints(&mut self) {
    self.snapped_waypoints = None;
  }

  pub fn set_instructions(&mut self, instructions: ::models::ResponseInstructions) {
    self.instructions = Some(instructions);
  }

  pub fn with_instructions(mut self, instructions: ::models::ResponseInstructions) -> RouteResponsePath {
    self.instructions = Some(instructions);
    self
  }

  pub fn instructions(&self) -> Option<&::models::ResponseInstructions> {
    self.instructions.as_ref()
  }

  pub fn reset_instructions(&mut self) {
    self.instructions = None;
  }

}



