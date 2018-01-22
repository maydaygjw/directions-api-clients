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
 * Activity
 */

public class Activity {
  /**
   * type of activity
   */
  @JsonAdapter(TypeEnum.Adapter.class)
  public enum TypeEnum {
    START("start"),
    
    END("end"),
    
    SERVICE("service"),
    
    PICKUPSHIPMENT("pickupShipment"),
    
    DELIVERSHIPMENT("deliverShipment"),
    
    PICKUP("pickup"),
    
    DELIVERY("delivery"),
    
    BREAK("break");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static TypeEnum fromValue(String text) {
      for (TypeEnum b : TypeEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }

    public static class Adapter extends TypeAdapter<TypeEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final TypeEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public TypeEnum read(final JsonReader jsonReader) throws IOException {
        String value = jsonReader.nextString();
        return TypeEnum.fromValue(String.valueOf(value));
      }
    }
  }

  @SerializedName("type")
  private TypeEnum type = null;

  @SerializedName("id")
  private String id = null;

  @SerializedName("location_id")
  private String locationId = null;

  @SerializedName("arr_time")
  private Long arrTime = null;

  @SerializedName("end_time")
  private Long endTime = null;

  @SerializedName("waiting_time")
  private Long waitingTime = null;

  @SerializedName("distance")
  private Long distance = null;

  @SerializedName("driving_time")
  private Long drivingTime = null;

  @SerializedName("load_before")
  private List<Integer> loadBefore = null;

  @SerializedName("load_after")
  private List<Integer> loadAfter = null;

  public Activity type(TypeEnum type) {
    this.type = type;
    return this;
  }

   /**
   * type of activity
   * @return type
  **/
  @ApiModelProperty(value = "type of activity")
  public TypeEnum getType() {
    return type;
  }

  public void setType(TypeEnum type) {
    this.type = type;
  }

  public Activity id(String id) {
    this.id = id;
    return this;
  }

   /**
   * id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to
   * @return id
  **/
  @ApiModelProperty(value = "id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public Activity locationId(String locationId) {
    this.locationId = locationId;
    return this;
  }

   /**
   * id that refers to address
   * @return locationId
  **/
  @ApiModelProperty(value = "id that refers to address")
  public String getLocationId() {
    return locationId;
  }

  public void setLocationId(String locationId) {
    this.locationId = locationId;
  }

  public Activity arrTime(Long arrTime) {
    this.arrTime = arrTime;
    return this;
  }

   /**
   * arrival time at this activity in ms
   * @return arrTime
  **/
  @ApiModelProperty(value = "arrival time at this activity in ms")
  public Long getArrTime() {
    return arrTime;
  }

  public void setArrTime(Long arrTime) {
    this.arrTime = arrTime;
  }

  public Activity endTime(Long endTime) {
    this.endTime = endTime;
    return this;
  }

   /**
   * end time of and thus departure time at this activity
   * @return endTime
  **/
  @ApiModelProperty(value = "end time of and thus departure time at this activity")
  public Long getEndTime() {
    return endTime;
  }

  public void setEndTime(Long endTime) {
    this.endTime = endTime;
  }

  public Activity waitingTime(Long waitingTime) {
    this.waitingTime = waitingTime;
    return this;
  }

   /**
   * waiting time at this activity in ms
   * @return waitingTime
  **/
  @ApiModelProperty(value = "waiting time at this activity in ms")
  public Long getWaitingTime() {
    return waitingTime;
  }

  public void setWaitingTime(Long waitingTime) {
    this.waitingTime = waitingTime;
  }

  public Activity distance(Long distance) {
    this.distance = distance;
    return this;
  }

   /**
   * cumulated distance from start to this activity in m
   * @return distance
  **/
  @ApiModelProperty(value = "cumulated distance from start to this activity in m")
  public Long getDistance() {
    return distance;
  }

  public void setDistance(Long distance) {
    this.distance = distance;
  }

  public Activity drivingTime(Long drivingTime) {
    this.drivingTime = drivingTime;
    return this;
  }

   /**
   * driving time of driver in ms
   * @return drivingTime
  **/
  @ApiModelProperty(value = "driving time of driver in ms")
  public Long getDrivingTime() {
    return drivingTime;
  }

  public void setDrivingTime(Long drivingTime) {
    this.drivingTime = drivingTime;
  }

  public Activity loadBefore(List<Integer> loadBefore) {
    this.loadBefore = loadBefore;
    return this;
  }

  public Activity addLoadBeforeItem(Integer loadBeforeItem) {
    if (this.loadBefore == null) {
      this.loadBefore = new ArrayList<Integer>();
    }
    this.loadBefore.add(loadBeforeItem);
    return this;
  }

   /**
   * Array with size/capacity dimensions before this activity
   * @return loadBefore
  **/
  @ApiModelProperty(value = "Array with size/capacity dimensions before this activity")
  public List<Integer> getLoadBefore() {
    return loadBefore;
  }

  public void setLoadBefore(List<Integer> loadBefore) {
    this.loadBefore = loadBefore;
  }

  public Activity loadAfter(List<Integer> loadAfter) {
    this.loadAfter = loadAfter;
    return this;
  }

  public Activity addLoadAfterItem(Integer loadAfterItem) {
    if (this.loadAfter == null) {
      this.loadAfter = new ArrayList<Integer>();
    }
    this.loadAfter.add(loadAfterItem);
    return this;
  }

   /**
   * Array with size/capacity dimensions after this activity
   * @return loadAfter
  **/
  @ApiModelProperty(value = "Array with size/capacity dimensions after this activity")
  public List<Integer> getLoadAfter() {
    return loadAfter;
  }

  public void setLoadAfter(List<Integer> loadAfter) {
    this.loadAfter = loadAfter;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Activity activity = (Activity) o;
    return Objects.equals(this.type, activity.type) &&
        Objects.equals(this.id, activity.id) &&
        Objects.equals(this.locationId, activity.locationId) &&
        Objects.equals(this.arrTime, activity.arrTime) &&
        Objects.equals(this.endTime, activity.endTime) &&
        Objects.equals(this.waitingTime, activity.waitingTime) &&
        Objects.equals(this.distance, activity.distance) &&
        Objects.equals(this.drivingTime, activity.drivingTime) &&
        Objects.equals(this.loadBefore, activity.loadBefore) &&
        Objects.equals(this.loadAfter, activity.loadAfter);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, id, locationId, arrTime, endTime, waitingTime, distance, drivingTime, loadBefore, loadAfter);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Activity {\n");
    
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    locationId: ").append(toIndentedString(locationId)).append("\n");
    sb.append("    arrTime: ").append(toIndentedString(arrTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    waitingTime: ").append(toIndentedString(waitingTime)).append("\n");
    sb.append("    distance: ").append(toIndentedString(distance)).append("\n");
    sb.append("    drivingTime: ").append(toIndentedString(drivingTime)).append("\n");
    sb.append("    loadBefore: ").append(toIndentedString(loadBefore)).append("\n");
    sb.append("    loadAfter: ").append(toIndentedString(loadAfter)).append("\n");
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

