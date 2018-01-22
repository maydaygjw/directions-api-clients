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
pub struct IsochroneResponse {
  #[serde(rename = "polygons")]
  polygons: Option<Vec<::models::IsochroneResponsePolygon>>,
  #[serde(rename = "copyrights")]
  copyrights: Option<Vec<String>>
}

impl IsochroneResponse {
  pub fn new() -> IsochroneResponse {
    IsochroneResponse {
      polygons: None,
      copyrights: None
    }
  }

  pub fn set_polygons(&mut self, polygons: Vec<::models::IsochroneResponsePolygon>) {
    self.polygons = Some(polygons);
  }

  pub fn with_polygons(mut self, polygons: Vec<::models::IsochroneResponsePolygon>) -> IsochroneResponse {
    self.polygons = Some(polygons);
    self
  }

  pub fn polygons(&self) -> Option<&Vec<::models::IsochroneResponsePolygon>> {
    self.polygons.as_ref()
  }

  pub fn reset_polygons(&mut self) {
    self.polygons = None;
  }

  pub fn set_copyrights(&mut self, copyrights: Vec<String>) {
    self.copyrights = Some(copyrights);
  }

  pub fn with_copyrights(mut self, copyrights: Vec<String>) -> IsochroneResponse {
    self.copyrights = Some(copyrights);
    self
  }

  pub fn copyrights(&self) -> Option<&Vec<String>> {
    self.copyrights.as_ref()
  }

  pub fn reset_copyrights(&mut self) {
    self.copyrights = None;
  }

}



