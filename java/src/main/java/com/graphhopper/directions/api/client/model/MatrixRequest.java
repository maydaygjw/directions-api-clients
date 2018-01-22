/*
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


package com.graphhopper.directions.api.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * MatrixRequest
 */

public class MatrixRequest {
  @SerializedName("points")
  private List<List<Double>> points = null;

  @SerializedName("from_points")
  private String fromPoints = null;

  @SerializedName("to_points")
  private String toPoints = null;

  @SerializedName("out_arrays")
  private List<String> outArrays = null;

  @SerializedName("vehicle")
  private String vehicle = null;

  public MatrixRequest points(List<List<Double>> points) {
    this.points = points;
    return this;
  }

  public MatrixRequest addPointsItem(List<Double> pointsItem) {
    if (this.points == null) {
      this.points = new ArrayList<List<Double>>();
    }
    this.points.add(pointsItem);
    return this;
  }

   /**
   * Specifiy multiple points for which the weight-, route-, time- or distance-matrix should be calculated. In this case the starts are identical to the destinations. If there are N points, then NxN entries will be calculated. The order of the point parameter is important. Specify at least three points. Cannot be used together with from_point or to_point. Is a string with the format longitude,latitude.
   * @return points
  **/
  @ApiModelProperty(value = "Specifiy multiple points for which the weight-, route-, time- or distance-matrix should be calculated. In this case the starts are identical to the destinations. If there are N points, then NxN entries will be calculated. The order of the point parameter is important. Specify at least three points. Cannot be used together with from_point or to_point. Is a string with the format longitude,latitude.")
  public List<List<Double>> getPoints() {
    return points;
  }

  public void setPoints(List<List<Double>> points) {
    this.points = points;
  }

  public MatrixRequest fromPoints(String fromPoints) {
    this.fromPoints = fromPoints;
    return this;
  }

   /**
   * The starting points for the routes. E.g. if you want to calculate the three routes A-&amp;gt;1, A-&amp;gt;2, A-&amp;gt;3 then you have one from_point parameter and three to_point parameters. Is a string with the format longitude,latitude.
   * @return fromPoints
  **/
  @ApiModelProperty(value = "The starting points for the routes. E.g. if you want to calculate the three routes A-&gt;1, A-&gt;2, A-&gt;3 then you have one from_point parameter and three to_point parameters. Is a string with the format longitude,latitude.")
  public String getFromPoints() {
    return fromPoints;
  }

  public void setFromPoints(String fromPoints) {
    this.fromPoints = fromPoints;
  }

  public MatrixRequest toPoints(String toPoints) {
    this.toPoints = toPoints;
    return this;
  }

   /**
   * The destination points for the routes. Is a string with the format longitude,latitude.
   * @return toPoints
  **/
  @ApiModelProperty(value = "The destination points for the routes. Is a string with the format longitude,latitude.")
  public String getToPoints() {
    return toPoints;
  }

  public void setToPoints(String toPoints) {
    this.toPoints = toPoints;
  }

  public MatrixRequest outArrays(List<String> outArrays) {
    this.outArrays = outArrays;
    return this;
  }

  public MatrixRequest addOutArraysItem(String outArraysItem) {
    if (this.outArrays == null) {
      this.outArrays = new ArrayList<String>();
    }
    this.outArrays.add(outArraysItem);
    return this;
  }

   /**
   * Specifies which arrays should be included in the response. Specify one or more of the following options &#39;weights&#39;, &#39;times&#39;, &#39;distances&#39;. To specify more than one array use e.g. out_array&#x3D;times&amp;amp;out_array&#x3D;distances. The units of the entries of distances are meters, of times are seconds and of weights is arbitrary and it can differ for different vehicles or versions of this API.
   * @return outArrays
  **/
  @ApiModelProperty(value = "Specifies which arrays should be included in the response. Specify one or more of the following options 'weights', 'times', 'distances'. To specify more than one array use e.g. out_array=times&amp;out_array=distances. The units of the entries of distances are meters, of times are seconds and of weights is arbitrary and it can differ for different vehicles or versions of this API.")
  public List<String> getOutArrays() {
    return outArrays;
  }

  public void setOutArrays(List<String> outArrays) {
    this.outArrays = outArrays;
  }

  public MatrixRequest vehicle(String vehicle) {
    this.vehicle = vehicle;
    return this;
  }

   /**
   * The vehicle for which the route should be calculated. Other vehicles are foot, small_truck etc, see here for the details.
   * @return vehicle
  **/
  @ApiModelProperty(value = "The vehicle for which the route should be calculated. Other vehicles are foot, small_truck etc, see here for the details.")
  public String getVehicle() {
    return vehicle;
  }

  public void setVehicle(String vehicle) {
    this.vehicle = vehicle;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MatrixRequest matrixRequest = (MatrixRequest) o;
    return Objects.equals(this.points, matrixRequest.points) &&
        Objects.equals(this.fromPoints, matrixRequest.fromPoints) &&
        Objects.equals(this.toPoints, matrixRequest.toPoints) &&
        Objects.equals(this.outArrays, matrixRequest.outArrays) &&
        Objects.equals(this.vehicle, matrixRequest.vehicle);
  }

  @Override
  public int hashCode() {
    return Objects.hash(points, fromPoints, toPoints, outArrays, vehicle);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MatrixRequest {\n");
    
    sb.append("    points: ").append(toIndentedString(points)).append("\n");
    sb.append("    fromPoints: ").append(toIndentedString(fromPoints)).append("\n");
    sb.append("    toPoints: ").append(toIndentedString(toPoints)).append("\n");
    sb.append("    outArrays: ").append(toIndentedString(outArrays)).append("\n");
    sb.append("    vehicle: ").append(toIndentedString(vehicle)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

