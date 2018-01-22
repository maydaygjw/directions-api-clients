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
pub struct Response {
  #[serde(rename = "copyrights")]
  copyrights: Option<Vec<String>>,
  /// unique identify of job - which you get when posting your request to the large problem solver
  #[serde(rename = "job_id")]
  job_id: Option<String>,
  /// indicates the current status of the job
  #[serde(rename = "status")]
  status: Option<String>,
  /// waiting time in ms
  #[serde(rename = "waiting_in_queue")]
  waiting_in_queue: Option<i64>,
  /// processing time in ms. if job is still waiting in queue, processing_time is 0
  #[serde(rename = "processing_time")]
  processing_time: Option<i64>,
  /// the solution. only available if status field indicates finished
  #[serde(rename = "solution")]
  solution: Option<::models::Solution>
}

impl Response {
  pub fn new() -> Response {
    Response {
      copyrights: None,
      job_id: None,
      status: None,
      waiting_in_queue: None,
      processing_time: None,
      solution: None
    }
  }

  pub fn set_copyrights(&mut self, copyrights: Vec<String>) {
    self.copyrights = Some(copyrights);
  }

  pub fn with_copyrights(mut self, copyrights: Vec<String>) -> Response {
    self.copyrights = Some(copyrights);
    self
  }

  pub fn copyrights(&self) -> Option<&Vec<String>> {
    self.copyrights.as_ref()
  }

  pub fn reset_copyrights(&mut self) {
    self.copyrights = None;
  }

  pub fn set_job_id(&mut self, job_id: String) {
    self.job_id = Some(job_id);
  }

  pub fn with_job_id(mut self, job_id: String) -> Response {
    self.job_id = Some(job_id);
    self
  }

  pub fn job_id(&self) -> Option<&String> {
    self.job_id.as_ref()
  }

  pub fn reset_job_id(&mut self) {
    self.job_id = None;
  }

  pub fn set_status(&mut self, status: String) {
    self.status = Some(status);
  }

  pub fn with_status(mut self, status: String) -> Response {
    self.status = Some(status);
    self
  }

  pub fn status(&self) -> Option<&String> {
    self.status.as_ref()
  }

  pub fn reset_status(&mut self) {
    self.status = None;
  }

  pub fn set_waiting_in_queue(&mut self, waiting_in_queue: i64) {
    self.waiting_in_queue = Some(waiting_in_queue);
  }

  pub fn with_waiting_in_queue(mut self, waiting_in_queue: i64) -> Response {
    self.waiting_in_queue = Some(waiting_in_queue);
    self
  }

  pub fn waiting_in_queue(&self) -> Option<&i64> {
    self.waiting_in_queue.as_ref()
  }

  pub fn reset_waiting_in_queue(&mut self) {
    self.waiting_in_queue = None;
  }

  pub fn set_processing_time(&mut self, processing_time: i64) {
    self.processing_time = Some(processing_time);
  }

  pub fn with_processing_time(mut self, processing_time: i64) -> Response {
    self.processing_time = Some(processing_time);
    self
  }

  pub fn processing_time(&self) -> Option<&i64> {
    self.processing_time.as_ref()
  }

  pub fn reset_processing_time(&mut self) {
    self.processing_time = None;
  }

  pub fn set_solution(&mut self, solution: ::models::Solution) {
    self.solution = Some(solution);
  }

  pub fn with_solution(mut self, solution: ::models::Solution) -> Response {
    self.solution = Some(solution);
    self
  }

  pub fn solution(&self) -> Option<&::models::Solution> {
    self.solution.as_ref()
  }

  pub fn reset_solution(&mut self) {
    self.solution = None;
  }

}



