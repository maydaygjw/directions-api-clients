=begin
#GraphHopper Directions API

#You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.

OpenAPI spec version: 1.0.0

Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.0-SNAPSHOT

=end

require 'date'

module DirectionsApiClient

  class Activity
    # type of activity
    attr_accessor :type

    # id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to
    attr_accessor :id

    # id that refers to address
    attr_accessor :location_id

    # arrival time at this activity in seconds
    attr_accessor :arr_time

    # end time of and thus departure time at this activity
    attr_accessor :end_time

    # waiting time at this activity in seconds
    attr_accessor :waiting_time

    # cumulated distance from start to this activity in m
    attr_accessor :distance

    # driving time of driver in seconds
    attr_accessor :driving_time

    # Array with size/capacity dimensions before this activity
    attr_accessor :load_before

    # Array with size/capacity dimensions after this activity
    attr_accessor :load_after

    class EnumAttributeValidator
      attr_reader :datatype
      attr_reader :allowable_values

      def initialize(datatype, allowable_values)
        @allowable_values = allowable_values.map do |value|
          case datatype.to_s
          when /Integer/i
            value.to_i
          when /Float/i
            value.to_f
          else
            value
          end
        end
      end

      def valid?(value)
        !value || allowable_values.include?(value)
      end
    end

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'type' => :'type',
        :'id' => :'id',
        :'location_id' => :'location_id',
        :'arr_time' => :'arr_time',
        :'end_time' => :'end_time',
        :'waiting_time' => :'waiting_time',
        :'distance' => :'distance',
        :'driving_time' => :'driving_time',
        :'load_before' => :'load_before',
        :'load_after' => :'load_after'
      }
    end

    # Attribute type mapping.
    def self.swagger_types
      {
        :'type' => :'String',
        :'id' => :'String',
        :'location_id' => :'String',
        :'arr_time' => :'Integer',
        :'end_time' => :'Integer',
        :'waiting_time' => :'Integer',
        :'distance' => :'Integer',
        :'driving_time' => :'Integer',
        :'load_before' => :'Array<Integer>',
        :'load_after' => :'Array<Integer>'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      return unless attributes.is_a?(Hash)

      # convert string to symbol for hash key
      attributes = attributes.each_with_object({}){|(k,v), h| h[k.to_sym] = v}

      if attributes.has_key?(:'type')
        self.type = attributes[:'type']
      end

      if attributes.has_key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.has_key?(:'location_id')
        self.location_id = attributes[:'location_id']
      end

      if attributes.has_key?(:'arr_time')
        self.arr_time = attributes[:'arr_time']
      end

      if attributes.has_key?(:'end_time')
        self.end_time = attributes[:'end_time']
      end

      if attributes.has_key?(:'waiting_time')
        self.waiting_time = attributes[:'waiting_time']
      end

      if attributes.has_key?(:'distance')
        self.distance = attributes[:'distance']
      end

      if attributes.has_key?(:'driving_time')
        self.driving_time = attributes[:'driving_time']
      end

      if attributes.has_key?(:'load_before')
        if (value = attributes[:'load_before']).is_a?(Array)
          self.load_before = value
        end
      end

      if attributes.has_key?(:'load_after')
        if (value = attributes[:'load_after']).is_a?(Array)
          self.load_after = value
        end
      end

    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      return invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      type_validator = EnumAttributeValidator.new('String', ["start", "end", "service", "pickupShipment", "deliverShipment", "pickup", "delivery", "break"])
      return false unless type_validator.valid?(@type)
      return true
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] type Object to be assigned
    def type=(type)
      validator = EnumAttributeValidator.new('String', ["start", "end", "service", "pickupShipment", "deliverShipment", "pickup", "delivery", "break"])
      unless validator.valid?(type)
        fail ArgumentError, "invalid value for 'type', must be one of #{validator.allowable_values}."
      end
      @type = type
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          type == o.type &&
          id == o.id &&
          location_id == o.location_id &&
          arr_time == o.arr_time &&
          end_time == o.end_time &&
          waiting_time == o.waiting_time &&
          distance == o.distance &&
          driving_time == o.driving_time &&
          load_before == o.load_before &&
          load_after == o.load_after
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Fixnum] Hash code
    def hash
      [type, id, location_id, arr_time, end_time, waiting_time, distance, driving_time, load_before, load_after].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.swagger_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map{ |v| _deserialize($1, v) } )
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :BOOLEAN
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        temp_model = DirectionsApiClient.const_get(type).new
        temp_model.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        next if value.nil?
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map{ |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end

  end

end
