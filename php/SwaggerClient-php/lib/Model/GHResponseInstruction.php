<?php
/**
 * GHResponseInstruction
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swaagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * GraphHopper Directions API
 *
 * With the GraphHopper Directions API you get reliable and fast web services for routing and more with world wide coverage. We offer A-to-B routing via the Routing API optionally with turn instructions and elevation data as well as route optimization with various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * GHResponseInstruction Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class GHResponseInstruction implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'GHResponseInstruction';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        'text' => 'string',
        'distance' => 'double',
        'time' => 'int',
        'interval' => 'int[]',
        'sign' => 'int',
        'annotation_text' => 'string',
        'annotation_importance' => 'int',
        'exit_number' => 'int',
        'turn_angle' => 'double'
    ];

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = [
        'text' => 'text',
        'distance' => 'distance',
        'time' => 'time',
        'interval' => 'interval',
        'sign' => 'sign',
        'annotation_text' => 'annotation_text',
        'annotation_importance' => 'annotation_importance',
        'exit_number' => 'exit_number',
        'turn_angle' => 'turn_angle'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        'text' => 'setText',
        'distance' => 'setDistance',
        'time' => 'setTime',
        'interval' => 'setInterval',
        'sign' => 'setSign',
        'annotation_text' => 'setAnnotationText',
        'annotation_importance' => 'setAnnotationImportance',
        'exit_number' => 'setExitNumber',
        'turn_angle' => 'setTurnAngle'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        'text' => 'getText',
        'distance' => 'getDistance',
        'time' => 'getTime',
        'interval' => 'getInterval',
        'sign' => 'getSign',
        'annotation_text' => 'getAnnotationText',
        'annotation_importance' => 'getAnnotationImportance',
        'exit_number' => 'getExitNumber',
        'turn_angle' => 'getTurnAngle'
    ];

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    public static function setters()
    {
        return self::$setters;
    }

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['text'] = isset($data['text']) ? $data['text'] : null;
        $this->container['distance'] = isset($data['distance']) ? $data['distance'] : null;
        $this->container['time'] = isset($data['time']) ? $data['time'] : null;
        $this->container['interval'] = isset($data['interval']) ? $data['interval'] : null;
        $this->container['sign'] = isset($data['sign']) ? $data['sign'] : null;
        $this->container['annotation_text'] = isset($data['annotation_text']) ? $data['annotation_text'] : null;
        $this->container['annotation_importance'] = isset($data['annotation_importance']) ? $data['annotation_importance'] : null;
        $this->container['exit_number'] = isset($data['exit_number']) ? $data['exit_number'] : null;
        $this->container['turn_angle'] = isset($data['turn_angle']) ? $data['turn_angle'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = [];
        return $invalid_properties;
    }

    /**
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properteis are valid
     */
    public function valid()
    {
        return true;
    }


    /**
     * Gets text
     * @return string
     */
    public function getText()
    {
        return $this->container['text'];
    }

    /**
     * Sets text
     * @param string $text A description what the user has to do in order to follow the route. The language depends on the locale parameter.
     * @return $this
     */
    public function setText($text)
    {
        $this->container['text'] = $text;

        return $this;
    }

    /**
     * Gets distance
     * @return double
     */
    public function getDistance()
    {
        return $this->container['distance'];
    }

    /**
     * Sets distance
     * @param double $distance The distance for this instruction, in meter
     * @return $this
     */
    public function setDistance($distance)
    {
        $this->container['distance'] = $distance;

        return $this;
    }

    /**
     * Gets time
     * @return int
     */
    public function getTime()
    {
        return $this->container['time'];
    }

    /**
     * Sets time
     * @param int $time The duration for this instruction, in ms
     * @return $this
     */
    public function setTime($time)
    {
        $this->container['time'] = $time;

        return $this;
    }

    /**
     * Gets interval
     * @return int[]
     */
    public function getInterval()
    {
        return $this->container['interval'];
    }

    /**
     * Sets interval
     * @param int[] $interval An array containing the first and the last index (relative to paths[0].points) of the points for this instruction. This is useful to know for which part of the route the instructions are valid.
     * @return $this
     */
    public function setInterval($interval)
    {
        $this->container['interval'] = $interval;

        return $this;
    }

    /**
     * Gets sign
     * @return int
     */
    public function getSign()
    {
        return $this->container['sign'];
    }

    /**
     * Sets sign
     * @param int $sign A number which specifies the sign to show e.g. for right turn etc <br>TURN_SHARP_LEFT = -3<br>TURN_LEFT = -2<br>TURN_SLIGHT_LEFT = -1<br>CONTINUE_ON_STREET = 0<br>TURN_SLIGHT_RIGHT = 1<br>TURN_RIGHT = 2<br>TURN_SHARP_RIGHT = 3<br>FINISH = 4<br>VIA_REACHED = 5<br>USE_ROUNDABOUT = 6
     * @return $this
     */
    public function setSign($sign)
    {
        $this->container['sign'] = $sign;

        return $this;
    }

    /**
     * Gets annotation_text
     * @return string
     */
    public function getAnnotationText()
    {
        return $this->container['annotation_text'];
    }

    /**
     * Sets annotation_text
     * @param string $annotation_text optional - A text describing the instruction in more detail, e.g. like surface of the way, warnings or involved costs.
     * @return $this
     */
    public function setAnnotationText($annotation_text)
    {
        $this->container['annotation_text'] = $annotation_text;

        return $this;
    }

    /**
     * Gets annotation_importance
     * @return int
     */
    public function getAnnotationImportance()
    {
        return $this->container['annotation_importance'];
    }

    /**
     * Sets annotation_importance
     * @param int $annotation_importance optional - 0 stands for INFO, 1 for warning, 2 for costs, 3 for costs and warning
     * @return $this
     */
    public function setAnnotationImportance($annotation_importance)
    {
        $this->container['annotation_importance'] = $annotation_importance;

        return $this;
    }

    /**
     * Gets exit_number
     * @return int
     */
    public function getExitNumber()
    {
        return $this->container['exit_number'];
    }

    /**
     * Sets exit_number
     * @param int $exit_number optional - Only available for USE_ROUNDABOUT instructions. The count of exits at which the route leaves the roundabout.
     * @return $this
     */
    public function setExitNumber($exit_number)
    {
        $this->container['exit_number'] = $exit_number;

        return $this;
    }

    /**
     * Gets turn_angle
     * @return double
     */
    public function getTurnAngle()
    {
        return $this->container['turn_angle'];
    }

    /**
     * Sets turn_angle
     * @param double $turn_angle optional - Only available for USE_ROUNDABOUT instructions. The radian of the route within the roundabout - 0<r<2*PI for clockwise and -2PI<r<0 for counterclockwise transit. Null if the direction of rotation is undefined.
     * @return $this
     */
    public function setTurnAngle($turn_angle)
    {
        $this->container['turn_angle'] = $turn_angle;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}


