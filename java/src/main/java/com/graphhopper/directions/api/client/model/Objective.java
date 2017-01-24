/*
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


package com.graphhopper.directions.api.client.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * Objective
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-01-25T10:05:28.496+11:00")
public class Objective {
  /**
   * type of objective function, i.e. min or min-max 
   */
  public enum TypeEnum {
    @SerializedName("min")
    MIN("min"),
    
    @SerializedName("min-max")
    MIN_MAX("min-max");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
  }

  @SerializedName("type")
  private TypeEnum type = null;

  /**
   * objective function value
   */
  public enum ValueEnum {
    @SerializedName("completion_time")
    COMPLETION_TIME("completion_time"),
    
    @SerializedName("transport_time")
    TRANSPORT_TIME("transport_time"),
    
    @SerializedName("vehicles")
    VEHICLES("vehicles");

    private String value;

    ValueEnum(String value) {
      this.value = value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }
  }

  @SerializedName("value")
  private ValueEnum value = null;

  public Objective type(TypeEnum type) {
    this.type = type;
    return this;
  }

   /**
   * type of objective function, i.e. min or min-max 
   * @return type
  **/
  @ApiModelProperty(example = "null", value = "type of objective function, i.e. min or min-max ")
  public TypeEnum getType() {
    return type;
  }

  public void setType(TypeEnum type) {
    this.type = type;
  }

  public Objective value(ValueEnum value) {
    this.value = value;
    return this;
  }

   /**
   * objective function value
   * @return value
  **/
  @ApiModelProperty(example = "null", value = "objective function value")
  public ValueEnum getValue() {
    return value;
  }

  public void setValue(ValueEnum value) {
    this.value = value;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Objective objective = (Objective) o;
    return Objects.equals(this.type, objective.type) &&
        Objects.equals(this.value, objective.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, value);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Objective {\n");
    
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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

