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
pub struct RouteResponse {
  #[serde(rename = "paths")]
  paths: Option<Vec<::models::RouteResponsePath>>,
  #[serde(rename = "info")]
  info: Option<::models::ResponseInfo>
}

impl RouteResponse {
  pub fn new() -> RouteResponse {
    RouteResponse {
      paths: None,
      info: None
    }
  }

  pub fn set_paths(&mut self, paths: Vec<::models::RouteResponsePath>) {
    self.paths = Some(paths);
  }

  pub fn with_paths(mut self, paths: Vec<::models::RouteResponsePath>) -> RouteResponse {
    self.paths = Some(paths);
    self
  }

  pub fn paths(&self) -> Option<&Vec<::models::RouteResponsePath>> {
    self.paths.as_ref()
  }

  pub fn reset_paths(&mut self) {
    self.paths = None;
  }

  pub fn set_info(&mut self, info: ::models::ResponseInfo) {
    self.info = Some(info);
  }

  pub fn with_info(mut self, info: ::models::ResponseInfo) -> RouteResponse {
    self.info = Some(info);
    self
  }

  pub fn info(&self) -> Option<&::models::ResponseInfo> {
    self.info.as_ref()
  }

  pub fn reset_info(&mut self) {
    self.info = None;
  }

}



