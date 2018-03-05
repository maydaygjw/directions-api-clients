/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// Routing
    /// </summary>
    [DataContract]
    public partial class Routing :  IEquatable<Routing>, IValidatableObject
    {
        /// <summary>
        /// specifies the data provider
        /// </summary>
        /// <value>specifies the data provider</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum NetworkDataProviderEnum
        {
            
            /// <summary>
            /// Enum Openstreetmap for value: openstreetmap
            /// </summary>
            [EnumMember(Value = "openstreetmap")]
            Openstreetmap = 1,
            
            /// <summary>
            /// Enum Tomtom for value: tomtom
            /// </summary>
            [EnumMember(Value = "tomtom")]
            Tomtom = 2
        }

        /// <summary>
        /// specifies the data provider
        /// </summary>
        /// <value>specifies the data provider</value>
        [DataMember(Name="network_data_provider", EmitDefaultValue=false)]
        public NetworkDataProviderEnum? NetworkDataProvider { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="Routing" /> class.
        /// </summary>
        /// <param name="CalcPoints">indicates whether solution should come with route geometries.</param>
        /// <param name="ConsiderTraffic">indicates whether historical traffic information should be considered.</param>
        /// <param name="NetworkDataProvider">specifies the data provider.</param>
        /// <param name="FailFast">indicates whether matrix calculation should fail fast when points cannot be connected.</param>
        public Routing(bool? CalcPoints = default(bool?), bool? ConsiderTraffic = default(bool?), NetworkDataProviderEnum? NetworkDataProvider = default(NetworkDataProviderEnum?), bool? FailFast = default(bool?))
        {
            this.CalcPoints = CalcPoints;
            this.ConsiderTraffic = ConsiderTraffic;
            this.NetworkDataProvider = NetworkDataProvider;
            this.FailFast = FailFast;
        }
        
        /// <summary>
        /// indicates whether solution should come with route geometries
        /// </summary>
        /// <value>indicates whether solution should come with route geometries</value>
        [DataMember(Name="calc_points", EmitDefaultValue=false)]
        public bool? CalcPoints { get; set; }

        /// <summary>
        /// indicates whether historical traffic information should be considered
        /// </summary>
        /// <value>indicates whether historical traffic information should be considered</value>
        [DataMember(Name="consider_traffic", EmitDefaultValue=false)]
        public bool? ConsiderTraffic { get; set; }


        /// <summary>
        /// indicates whether matrix calculation should fail fast when points cannot be connected
        /// </summary>
        /// <value>indicates whether matrix calculation should fail fast when points cannot be connected</value>
        [DataMember(Name="fail_fast", EmitDefaultValue=false)]
        public bool? FailFast { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Routing {\n");
            sb.Append("  CalcPoints: ").Append(CalcPoints).Append("\n");
            sb.Append("  ConsiderTraffic: ").Append(ConsiderTraffic).Append("\n");
            sb.Append("  NetworkDataProvider: ").Append(NetworkDataProvider).Append("\n");
            sb.Append("  FailFast: ").Append(FailFast).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as Routing);
        }

        /// <summary>
        /// Returns true if Routing instances are equal
        /// </summary>
        /// <param name="input">Instance of Routing to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Routing input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CalcPoints == input.CalcPoints ||
                    (this.CalcPoints != null &&
                    this.CalcPoints.Equals(input.CalcPoints))
                ) && 
                (
                    this.ConsiderTraffic == input.ConsiderTraffic ||
                    (this.ConsiderTraffic != null &&
                    this.ConsiderTraffic.Equals(input.ConsiderTraffic))
                ) && 
                (
                    this.NetworkDataProvider == input.NetworkDataProvider ||
                    (this.NetworkDataProvider != null &&
                    this.NetworkDataProvider.Equals(input.NetworkDataProvider))
                ) && 
                (
                    this.FailFast == input.FailFast ||
                    (this.FailFast != null &&
                    this.FailFast.Equals(input.FailFast))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.CalcPoints != null)
                    hashCode = hashCode * 59 + this.CalcPoints.GetHashCode();
                if (this.ConsiderTraffic != null)
                    hashCode = hashCode * 59 + this.ConsiderTraffic.GetHashCode();
                if (this.NetworkDataProvider != null)
                    hashCode = hashCode * 59 + this.NetworkDataProvider.GetHashCode();
                if (this.FailFast != null)
                    hashCode = hashCode * 59 + this.FailFast.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
