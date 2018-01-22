/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct TimeWindow {
  /// earliest start time of corresponding activity
  #[serde(rename = "earliest")]
  earliest: Option<i64>,
  /// latest start time of corresponding activity
  #[serde(rename = "latest")]
  latest: Option<i64>
}

impl TimeWindow {
  pub fn new() -> TimeWindow {
    TimeWindow {
      earliest: None,
      latest: None
    }
  }

  pub fn set_earliest(&mut self, earliest: i64) {
    self.earliest = Some(earliest);
  }

  pub fn with_earliest(mut self, earliest: i64) -> TimeWindow {
    self.earliest = Some(earliest);
    self
  }

  pub fn earliest(&self) -> Option<&i64> {
    self.earliest.as_ref()
  }

  pub fn reset_earliest(&mut self) {
    self.earliest = None;
  }

  pub fn set_latest(&mut self, latest: i64) {
    self.latest = Some(latest);
  }

  pub fn with_latest(mut self, latest: i64) -> TimeWindow {
    self.latest = Some(latest);
    self
  }

  pub fn latest(&self) -> Option<&i64> {
    self.latest.as_ref()
  }

  pub fn reset_latest(&mut self) {
    self.latest = None;
  }

}



