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
    /// Service
    /// </summary>
    [DataContract]
    public partial class Service :  IEquatable<Service>, IValidatableObject
    {
        /// <summary>
        /// type of service
        /// </summary>
        /// <value>type of service</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum TypeEnum
        {
            
            /// <summary>
            /// Enum Service for value: service
            /// </summary>
            [EnumMember(Value = "service")]
            Service = 1,
            
            /// <summary>
            /// Enum Pickup for value: pickup
            /// </summary>
            [EnumMember(Value = "pickup")]
            Pickup = 2,
            
            /// <summary>
            /// Enum Delivery for value: delivery
            /// </summary>
            [EnumMember(Value = "delivery")]
            Delivery = 3
        }

        /// <summary>
        /// type of service
        /// </summary>
        /// <value>type of service</value>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public TypeEnum? Type { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="Service" /> class.
        /// </summary>
        /// <param name="Id">Unique identifier of service.</param>
        /// <param name="Type">type of service.</param>
        /// <param name="Priority">priority of service.</param>
        /// <param name="Name">name of service.</param>
        /// <param name="Address">Address.</param>
        /// <param name="Duration">duration of service, i.e. time in seconds the corresponding activity takes.</param>
        /// <param name="PreparationTime">preparation time of service, e.g. search for a parking space. it only falls due if the location of previous activity differs from this location.</param>
        /// <param name="TimeWindows">array of time windows. currently, only a single time window is allowed.</param>
        /// <param name="Size">array of capacity dimensions.</param>
        /// <param name="RequiredSkills">array of required skills.</param>
        /// <param name="AllowedVehicles">array of allowed vehicle ids.</param>
        /// <param name="DisallowedVehicles">array of disallowed vehicle ids.</param>
        /// <param name="MaxTimeInVehicle">max time service can stay in vehicle.</param>
        public Service(string Id = default(string), TypeEnum? Type = default(TypeEnum?), int? Priority = default(int?), string Name = default(string), Address Address = default(Address), long? Duration = default(long?), long? PreparationTime = default(long?), List<TimeWindow> TimeWindows = default(List<TimeWindow>), List<int?> Size = default(List<int?>), List<string> RequiredSkills = default(List<string>), List<string> AllowedVehicles = default(List<string>), List<string> DisallowedVehicles = default(List<string>), long? MaxTimeInVehicle = default(long?))
        {
            this.Id = Id;
            this.Type = Type;
            this.Priority = Priority;
            this.Name = Name;
            this.Address = Address;
            this.Duration = Duration;
            this.PreparationTime = PreparationTime;
            this.TimeWindows = TimeWindows;
            this.Size = Size;
            this.RequiredSkills = RequiredSkills;
            this.AllowedVehicles = AllowedVehicles;
            this.DisallowedVehicles = DisallowedVehicles;
            this.MaxTimeInVehicle = MaxTimeInVehicle;
        }
        
        /// <summary>
        /// Unique identifier of service
        /// </summary>
        /// <value>Unique identifier of service</value>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }


        /// <summary>
        /// priority of service
        /// </summary>
        /// <value>priority of service</value>
        [DataMember(Name="priority", EmitDefaultValue=false)]
        public int? Priority { get; set; }

        /// <summary>
        /// name of service
        /// </summary>
        /// <value>name of service</value>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Address
        /// </summary>
        [DataMember(Name="address", EmitDefaultValue=false)]
        public Address Address { get; set; }

        /// <summary>
        /// duration of service, i.e. time in seconds the corresponding activity takes
        /// </summary>
        /// <value>duration of service, i.e. time in seconds the corresponding activity takes</value>
        [DataMember(Name="duration", EmitDefaultValue=false)]
        public long? Duration { get; set; }

        /// <summary>
        /// preparation time of service, e.g. search for a parking space. it only falls due if the location of previous activity differs from this location
        /// </summary>
        /// <value>preparation time of service, e.g. search for a parking space. it only falls due if the location of previous activity differs from this location</value>
        [DataMember(Name="preparation_time", EmitDefaultValue=false)]
        public long? PreparationTime { get; set; }

        /// <summary>
        /// array of time windows. currently, only a single time window is allowed
        /// </summary>
        /// <value>array of time windows. currently, only a single time window is allowed</value>
        [DataMember(Name="time_windows", EmitDefaultValue=false)]
        public List<TimeWindow> TimeWindows { get; set; }

        /// <summary>
        /// array of capacity dimensions
        /// </summary>
        /// <value>array of capacity dimensions</value>
        [DataMember(Name="size", EmitDefaultValue=false)]
        public List<int?> Size { get; set; }

        /// <summary>
        /// array of required skills
        /// </summary>
        /// <value>array of required skills</value>
        [DataMember(Name="required_skills", EmitDefaultValue=false)]
        public List<string> RequiredSkills { get; set; }

        /// <summary>
        /// array of allowed vehicle ids
        /// </summary>
        /// <value>array of allowed vehicle ids</value>
        [DataMember(Name="allowed_vehicles", EmitDefaultValue=false)]
        public List<string> AllowedVehicles { get; set; }

        /// <summary>
        /// array of disallowed vehicle ids
        /// </summary>
        /// <value>array of disallowed vehicle ids</value>
        [DataMember(Name="disallowed_vehicles", EmitDefaultValue=false)]
        public List<string> DisallowedVehicles { get; set; }

        /// <summary>
        /// max time service can stay in vehicle
        /// </summary>
        /// <value>max time service can stay in vehicle</value>
        [DataMember(Name="max_time_in_vehicle", EmitDefaultValue=false)]
        public long? MaxTimeInVehicle { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Service {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Address: ").Append(Address).Append("\n");
            sb.Append("  Duration: ").Append(Duration).Append("\n");
            sb.Append("  PreparationTime: ").Append(PreparationTime).Append("\n");
            sb.Append("  TimeWindows: ").Append(TimeWindows).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  RequiredSkills: ").Append(RequiredSkills).Append("\n");
            sb.Append("  AllowedVehicles: ").Append(AllowedVehicles).Append("\n");
            sb.Append("  DisallowedVehicles: ").Append(DisallowedVehicles).Append("\n");
            sb.Append("  MaxTimeInVehicle: ").Append(MaxTimeInVehicle).Append("\n");
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
            return this.Equals(input as Service);
        }

        /// <summary>
        /// Returns true if Service instances are equal
        /// </summary>
        /// <param name="input">Instance of Service to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Service input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.Priority == input.Priority ||
                    (this.Priority != null &&
                    this.Priority.Equals(input.Priority))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.Address == input.Address ||
                    (this.Address != null &&
                    this.Address.Equals(input.Address))
                ) && 
                (
                    this.Duration == input.Duration ||
                    (this.Duration != null &&
                    this.Duration.Equals(input.Duration))
                ) && 
                (
                    this.PreparationTime == input.PreparationTime ||
                    (this.PreparationTime != null &&
                    this.PreparationTime.Equals(input.PreparationTime))
                ) && 
                (
                    this.TimeWindows == input.TimeWindows ||
                    this.TimeWindows != null &&
                    this.TimeWindows.SequenceEqual(input.TimeWindows)
                ) && 
                (
                    this.Size == input.Size ||
                    this.Size != null &&
                    this.Size.SequenceEqual(input.Size)
                ) && 
                (
                    this.RequiredSkills == input.RequiredSkills ||
                    this.RequiredSkills != null &&
                    this.RequiredSkills.SequenceEqual(input.RequiredSkills)
                ) && 
                (
                    this.AllowedVehicles == input.AllowedVehicles ||
                    this.AllowedVehicles != null &&
                    this.AllowedVehicles.SequenceEqual(input.AllowedVehicles)
                ) && 
                (
                    this.DisallowedVehicles == input.DisallowedVehicles ||
                    this.DisallowedVehicles != null &&
                    this.DisallowedVehicles.SequenceEqual(input.DisallowedVehicles)
                ) && 
                (
                    this.MaxTimeInVehicle == input.MaxTimeInVehicle ||
                    (this.MaxTimeInVehicle != null &&
                    this.MaxTimeInVehicle.Equals(input.MaxTimeInVehicle))
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
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
                if (this.Priority != null)
                    hashCode = hashCode * 59 + this.Priority.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.Address != null)
                    hashCode = hashCode * 59 + this.Address.GetHashCode();
                if (this.Duration != null)
                    hashCode = hashCode * 59 + this.Duration.GetHashCode();
                if (this.PreparationTime != null)
                    hashCode = hashCode * 59 + this.PreparationTime.GetHashCode();
                if (this.TimeWindows != null)
                    hashCode = hashCode * 59 + this.TimeWindows.GetHashCode();
                if (this.Size != null)
                    hashCode = hashCode * 59 + this.Size.GetHashCode();
                if (this.RequiredSkills != null)
                    hashCode = hashCode * 59 + this.RequiredSkills.GetHashCode();
                if (this.AllowedVehicles != null)
                    hashCode = hashCode * 59 + this.AllowedVehicles.GetHashCode();
                if (this.DisallowedVehicles != null)
                    hashCode = hashCode * 59 + this.DisallowedVehicles.GetHashCode();
                if (this.MaxTimeInVehicle != null)
                    hashCode = hashCode * 59 + this.MaxTimeInVehicle.GetHashCode();
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
