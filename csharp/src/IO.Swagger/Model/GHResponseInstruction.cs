/* 
 * GraphHopper Directions API
 *
 * With the GraphHopper Directions API you get reliable and fast web services for routing and more with world wide coverage. We offer A-to-B routing via the Routing API optionally with turn instructions and elevation data as well as route optimization with various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API. 
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

namespace IO.Swagger.Model
{
    /// <summary>
    /// GHResponseInstruction
    /// </summary>
    [DataContract]
    public partial class GHResponseInstruction :  IEquatable<GHResponseInstruction>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GHResponseInstruction" /> class.
        /// </summary>
        /// <param name="Text">A description what the user has to do in order to follow the route. The language depends on the locale parameter..</param>
        /// <param name="Distance">The distance for this instruction, in meter.</param>
        /// <param name="Time">The duration for this instruction, in ms.</param>
        /// <param name="Interval">An array containing the first and the last index (relative to paths[0].points) of the points for this instruction. This is useful to know for which part of the route the instructions are valid..</param>
        /// <param name="Sign">A number which specifies the sign to show e.g. for right turn etc &lt;br&gt;TURN_SHARP_LEFT &#x3D; -3&lt;br&gt;TURN_LEFT &#x3D; -2&lt;br&gt;TURN_SLIGHT_LEFT &#x3D; -1&lt;br&gt;CONTINUE_ON_STREET &#x3D; 0&lt;br&gt;TURN_SLIGHT_RIGHT &#x3D; 1&lt;br&gt;TURN_RIGHT &#x3D; 2&lt;br&gt;TURN_SHARP_RIGHT &#x3D; 3&lt;br&gt;FINISH &#x3D; 4&lt;br&gt;VIA_REACHED &#x3D; 5&lt;br&gt;USE_ROUNDABOUT &#x3D; 6.</param>
        /// <param name="AnnotationText">optional - A text describing the instruction in more detail, e.g. like surface of the way, warnings or involved costs..</param>
        /// <param name="AnnotationImportance">optional - 0 stands for INFO, 1 for warning, 2 for costs, 3 for costs and warning.</param>
        /// <param name="ExitNumber">optional - Only available for USE_ROUNDABOUT instructions. The count of exits at which the route leaves the roundabout..</param>
        /// <param name="TurnAngle">optional - Only available for USE_ROUNDABOUT instructions. The radian of the route within the roundabout - 0&lt;r&lt;2*PI for clockwise and -2PI&lt;r&lt;0 for counterclockwise transit. Null if the direction of rotation is undefined..</param>
        public GHResponseInstruction(string Text = default(string), double? Distance = default(double?), int? Time = default(int?), List<int?> Interval = default(List<int?>), int? Sign = default(int?), string AnnotationText = default(string), int? AnnotationImportance = default(int?), int? ExitNumber = default(int?), double? TurnAngle = default(double?))
        {
            this.Text = Text;
            this.Distance = Distance;
            this.Time = Time;
            this.Interval = Interval;
            this.Sign = Sign;
            this.AnnotationText = AnnotationText;
            this.AnnotationImportance = AnnotationImportance;
            this.ExitNumber = ExitNumber;
            this.TurnAngle = TurnAngle;
        }
        
        /// <summary>
        /// A description what the user has to do in order to follow the route. The language depends on the locale parameter.
        /// </summary>
        /// <value>A description what the user has to do in order to follow the route. The language depends on the locale parameter.</value>
        [DataMember(Name="text", EmitDefaultValue=false)]
        public string Text { get; set; }
        /// <summary>
        /// The distance for this instruction, in meter
        /// </summary>
        /// <value>The distance for this instruction, in meter</value>
        [DataMember(Name="distance", EmitDefaultValue=false)]
        public double? Distance { get; set; }
        /// <summary>
        /// The duration for this instruction, in ms
        /// </summary>
        /// <value>The duration for this instruction, in ms</value>
        [DataMember(Name="time", EmitDefaultValue=false)]
        public int? Time { get; set; }
        /// <summary>
        /// An array containing the first and the last index (relative to paths[0].points) of the points for this instruction. This is useful to know for which part of the route the instructions are valid.
        /// </summary>
        /// <value>An array containing the first and the last index (relative to paths[0].points) of the points for this instruction. This is useful to know for which part of the route the instructions are valid.</value>
        [DataMember(Name="interval", EmitDefaultValue=false)]
        public List<int?> Interval { get; set; }
        /// <summary>
        /// A number which specifies the sign to show e.g. for right turn etc &lt;br&gt;TURN_SHARP_LEFT &#x3D; -3&lt;br&gt;TURN_LEFT &#x3D; -2&lt;br&gt;TURN_SLIGHT_LEFT &#x3D; -1&lt;br&gt;CONTINUE_ON_STREET &#x3D; 0&lt;br&gt;TURN_SLIGHT_RIGHT &#x3D; 1&lt;br&gt;TURN_RIGHT &#x3D; 2&lt;br&gt;TURN_SHARP_RIGHT &#x3D; 3&lt;br&gt;FINISH &#x3D; 4&lt;br&gt;VIA_REACHED &#x3D; 5&lt;br&gt;USE_ROUNDABOUT &#x3D; 6
        /// </summary>
        /// <value>A number which specifies the sign to show e.g. for right turn etc &lt;br&gt;TURN_SHARP_LEFT &#x3D; -3&lt;br&gt;TURN_LEFT &#x3D; -2&lt;br&gt;TURN_SLIGHT_LEFT &#x3D; -1&lt;br&gt;CONTINUE_ON_STREET &#x3D; 0&lt;br&gt;TURN_SLIGHT_RIGHT &#x3D; 1&lt;br&gt;TURN_RIGHT &#x3D; 2&lt;br&gt;TURN_SHARP_RIGHT &#x3D; 3&lt;br&gt;FINISH &#x3D; 4&lt;br&gt;VIA_REACHED &#x3D; 5&lt;br&gt;USE_ROUNDABOUT &#x3D; 6</value>
        [DataMember(Name="sign", EmitDefaultValue=false)]
        public int? Sign { get; set; }
        /// <summary>
        /// optional - A text describing the instruction in more detail, e.g. like surface of the way, warnings or involved costs.
        /// </summary>
        /// <value>optional - A text describing the instruction in more detail, e.g. like surface of the way, warnings or involved costs.</value>
        [DataMember(Name="annotation_text", EmitDefaultValue=false)]
        public string AnnotationText { get; set; }
        /// <summary>
        /// optional - 0 stands for INFO, 1 for warning, 2 for costs, 3 for costs and warning
        /// </summary>
        /// <value>optional - 0 stands for INFO, 1 for warning, 2 for costs, 3 for costs and warning</value>
        [DataMember(Name="annotation_importance", EmitDefaultValue=false)]
        public int? AnnotationImportance { get; set; }
        /// <summary>
        /// optional - Only available for USE_ROUNDABOUT instructions. The count of exits at which the route leaves the roundabout.
        /// </summary>
        /// <value>optional - Only available for USE_ROUNDABOUT instructions. The count of exits at which the route leaves the roundabout.</value>
        [DataMember(Name="exit_number", EmitDefaultValue=false)]
        public int? ExitNumber { get; set; }
        /// <summary>
        /// optional - Only available for USE_ROUNDABOUT instructions. The radian of the route within the roundabout - 0&lt;r&lt;2*PI for clockwise and -2PI&lt;r&lt;0 for counterclockwise transit. Null if the direction of rotation is undefined.
        /// </summary>
        /// <value>optional - Only available for USE_ROUNDABOUT instructions. The radian of the route within the roundabout - 0&lt;r&lt;2*PI for clockwise and -2PI&lt;r&lt;0 for counterclockwise transit. Null if the direction of rotation is undefined.</value>
        [DataMember(Name="turn_angle", EmitDefaultValue=false)]
        public double? TurnAngle { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GHResponseInstruction {\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("  Distance: ").Append(Distance).Append("\n");
            sb.Append("  Time: ").Append(Time).Append("\n");
            sb.Append("  Interval: ").Append(Interval).Append("\n");
            sb.Append("  Sign: ").Append(Sign).Append("\n");
            sb.Append("  AnnotationText: ").Append(AnnotationText).Append("\n");
            sb.Append("  AnnotationImportance: ").Append(AnnotationImportance).Append("\n");
            sb.Append("  ExitNumber: ").Append(ExitNumber).Append("\n");
            sb.Append("  TurnAngle: ").Append(TurnAngle).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as GHResponseInstruction);
        }

        /// <summary>
        /// Returns true if GHResponseInstruction instances are equal
        /// </summary>
        /// <param name="other">Instance of GHResponseInstruction to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GHResponseInstruction other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Text == other.Text ||
                    this.Text != null &&
                    this.Text.Equals(other.Text)
                ) && 
                (
                    this.Distance == other.Distance ||
                    this.Distance != null &&
                    this.Distance.Equals(other.Distance)
                ) && 
                (
                    this.Time == other.Time ||
                    this.Time != null &&
                    this.Time.Equals(other.Time)
                ) && 
                (
                    this.Interval == other.Interval ||
                    this.Interval != null &&
                    this.Interval.SequenceEqual(other.Interval)
                ) && 
                (
                    this.Sign == other.Sign ||
                    this.Sign != null &&
                    this.Sign.Equals(other.Sign)
                ) && 
                (
                    this.AnnotationText == other.AnnotationText ||
                    this.AnnotationText != null &&
                    this.AnnotationText.Equals(other.AnnotationText)
                ) && 
                (
                    this.AnnotationImportance == other.AnnotationImportance ||
                    this.AnnotationImportance != null &&
                    this.AnnotationImportance.Equals(other.AnnotationImportance)
                ) && 
                (
                    this.ExitNumber == other.ExitNumber ||
                    this.ExitNumber != null &&
                    this.ExitNumber.Equals(other.ExitNumber)
                ) && 
                (
                    this.TurnAngle == other.TurnAngle ||
                    this.TurnAngle != null &&
                    this.TurnAngle.Equals(other.TurnAngle)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this.Text != null)
                    hash = hash * 59 + this.Text.GetHashCode();
                if (this.Distance != null)
                    hash = hash * 59 + this.Distance.GetHashCode();
                if (this.Time != null)
                    hash = hash * 59 + this.Time.GetHashCode();
                if (this.Interval != null)
                    hash = hash * 59 + this.Interval.GetHashCode();
                if (this.Sign != null)
                    hash = hash * 59 + this.Sign.GetHashCode();
                if (this.AnnotationText != null)
                    hash = hash * 59 + this.AnnotationText.GetHashCode();
                if (this.AnnotationImportance != null)
                    hash = hash * 59 + this.AnnotationImportance.GetHashCode();
                if (this.ExitNumber != null)
                    hash = hash * 59 + this.ExitNumber.GetHashCode();
                if (this.TurnAngle != null)
                    hash = hash * 59 + this.TurnAngle.GetHashCode();
                return hash;
            }
        }

        public IEnumerable<ValidationResult> Validate(ValidationContext validationContext)
        { 
            yield break;
        }
    }

}
