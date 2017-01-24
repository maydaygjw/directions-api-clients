/**
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

package io.swagger.client.api

import io.swagger.client.model.GHError
import io.swagger.client.model.GHGeocodingResponse
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class GeocodingApi(val defBasePath: String = "https://graphhopper.com/api/1",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  /**
   * Execute a Geocoding request
   * This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
   * @param key Get your key at graphhopper.com 
   * @param q If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)
   * @param locale Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)
   * @param limit Specify the maximum number of returned results (optional)
   * @param reverse Set to true to do a reverse Geocoding request (optional)
   * @param point The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)
   * @param provider Can be either, default, nominatim, opencagedata (optional)
   * @return GHGeocodingResponse
   */
  def geocodeGet(key: String, q: Option[String] = None, locale: Option[String] = None, limit: Option[Integer] = None, reverse: Option[Boolean] = None, point: Option[String] = None, provider: Option[String] = None): Option[GHGeocodingResponse] = {
    // create path and map variables
    val path = "/geocode".replaceAll("\\{format\\}", "json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (key == null) throw new Exception("Missing required parameter 'key' when calling GeocodingApi->geocodeGet")

    q.map(paramVal => queryParams += "q" -> paramVal.toString)
    locale.map(paramVal => queryParams += "locale" -> paramVal.toString)
    limit.map(paramVal => queryParams += "limit" -> paramVal.toString)
    reverse.map(paramVal => queryParams += "reverse" -> paramVal.toString)
    point.map(paramVal => queryParams += "point" -> paramVal.toString)
    provider.map(paramVal => queryParams += "provider" -> paramVal.toString)
    queryParams += "key" -> key.toString
    

    var postBody: AnyRef = null

    if (contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart
      postBody = mp
    } else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(apiInvoker.deserialize(s, "", classOf[GHGeocodingResponse]).asInstanceOf[GHGeocodingResponse])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

}
