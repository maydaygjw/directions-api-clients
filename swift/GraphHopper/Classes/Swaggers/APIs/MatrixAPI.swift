//
// MatrixAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class MatrixAPI: APIBase {
    /**
     Matrix API
     
     - parameter key: (query) Get your key at graphhopper.com 
     - parameter point: (query) Specifiy multiple points for which the weight-, route-, time- or distance-matrix should be calculated. In this case the starts are identical to the destinations. If there are N points, then NxN entries will be calculated. The order of the point parameter is important. Specify at least three points. Cannot be used together with from_point or to_point. Is a string with the format latitude,longitude. (optional)
     - parameter fromPoint: (query) The starting points for the routes. E.g. if you want to calculate the three routes A-&gt;1, A-&gt;2, A-&gt;3 then you have one from_point parameter and three to_point parameters. Is a string with the format latitude,longitude. (optional)
     - parameter toPoint: (query) The destination points for the routes. Is a string with the format latitude,longitude. (optional)
     - parameter outArray: (query) pecifies which arrays should be included in the response. Specify one or more of the following options &#39;weights&#39;, &#39;times&#39;, &#39;distances&#39;. To specify more than one array use e.g. out_array&#x3D;times&amp;out_array&#x3D;distances. The units of the entries of distances are meters, of times are seconds and of weights is arbitrary and it can differ for different vehicles or versions of this API. (optional)
     - parameter vehicle: (query) The vehicle for which the route should be calculated. Other vehicles are foot, bike, mtb, racingbike, motorcycle, small_truck, bus and truck. See here for the details. (optional, default to car)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func matrixGet(key key: String, point: [String]? = nil, fromPoint: String? = nil, toPoint: String? = nil, outArray: [String]? = nil, vehicle: String? = nil, completion: ((data: GHMatrixResponse?, error: ErrorType?) -> Void)) {
        matrixGetWithRequestBuilder(key: key, point: point, fromPoint: fromPoint, toPoint: toPoint, outArray: outArray, vehicle: vehicle).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Matrix API
     - GET /matrix
     - The Matrix API is part of the GraphHopper Directions API and with this API you can calculate many-to-many distances, times or routes a lot more efficient than calling the Routing API multiple times. In the Routing API we support multiple points, so called 'via points', which results in one route being calculated. The Matrix API results in NxM routes or more precise NxM weights, distances or times being calculated but is a lot faster compared to NxM single requests. The most simple example is a tourist trying to decide which pizza is close to him instead of using beeline distance she can calculate a 1x4 matrix. Or a delivery service in the need of often big NxN matrices to solve vehicle routing problems. E.g. the GraphHopper Route Optimization API uses the Matrix API under the hood to achieve this. 
     - examples: [{contentType=application/json, example={
  "distances" : [ [ 1.3579000000000001069366817318950779736042022705078125 ] ],
  "times" : [ [ 1.3579000000000001069366817318950779736042022705078125 ] ],
  "weights" : [ [ 1.3579000000000001069366817318950779736042022705078125 ] ],
  "info" : {
    "took" : 123,
    "copyrights" : [ "aeiou" ]
  }
}}]
     
     - parameter key: (query) Get your key at graphhopper.com 
     - parameter point: (query) Specifiy multiple points for which the weight-, route-, time- or distance-matrix should be calculated. In this case the starts are identical to the destinations. If there are N points, then NxN entries will be calculated. The order of the point parameter is important. Specify at least three points. Cannot be used together with from_point or to_point. Is a string with the format latitude,longitude. (optional)
     - parameter fromPoint: (query) The starting points for the routes. E.g. if you want to calculate the three routes A-&gt;1, A-&gt;2, A-&gt;3 then you have one from_point parameter and three to_point parameters. Is a string with the format latitude,longitude. (optional)
     - parameter toPoint: (query) The destination points for the routes. Is a string with the format latitude,longitude. (optional)
     - parameter outArray: (query) pecifies which arrays should be included in the response. Specify one or more of the following options &#39;weights&#39;, &#39;times&#39;, &#39;distances&#39;. To specify more than one array use e.g. out_array&#x3D;times&amp;out_array&#x3D;distances. The units of the entries of distances are meters, of times are seconds and of weights is arbitrary and it can differ for different vehicles or versions of this API. (optional)
     - parameter vehicle: (query) The vehicle for which the route should be calculated. Other vehicles are foot, bike, mtb, racingbike, motorcycle, small_truck, bus and truck. See here for the details. (optional, default to car)

     - returns: RequestBuilder<GHMatrixResponse> 
     */
    public class func matrixGetWithRequestBuilder(key key: String, point: [String]? = nil, fromPoint: String? = nil, toPoint: String? = nil, outArray: [String]? = nil, vehicle: String? = nil) -> RequestBuilder<GHMatrixResponse> {
        let path = "/matrix"
        let URLString = GraphHopperAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "point": point,
            "from_point": fromPoint,
            "to_point": toPoint,
            "out_array": outArray,
            "vehicle": vehicle,
            "key": key
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<GHMatrixResponse>.Type = GraphHopperAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**
     Matrix API Post
     
     - parameter key: (query) Get your key at graphhopper.com 
     - parameter body: (body)  (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func matrixPost(key key: String, body: GHMatrixRequest? = nil, completion: ((data: GHMatrixResponse?, error: ErrorType?) -> Void)) {
        matrixPostWithRequestBuilder(key: key, body: body).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Matrix API Post
     - POST /matrix
     - The GET request has an URL length limitation, which hurts for many locations per request. In those cases use a HTTP POST request with JSON data as input. The only parameter in the URL will be the key which stays in the URL. Both request scenarios are identically except that all singular parameter names are named as their plural for a POST request. 
     - examples: [{contentType=application/json, example={
  "distances" : [ [ 1.3579000000000001069366817318950779736042022705078125 ] ],
  "times" : [ [ 1.3579000000000001069366817318950779736042022705078125 ] ],
  "weights" : [ [ 1.3579000000000001069366817318950779736042022705078125 ] ],
  "info" : {
    "took" : 123,
    "copyrights" : [ "aeiou" ]
  }
}}]
     
     - parameter key: (query) Get your key at graphhopper.com 
     - parameter body: (body)  (optional)

     - returns: RequestBuilder<GHMatrixResponse> 
     */
    public class func matrixPostWithRequestBuilder(key key: String, body: GHMatrixRequest? = nil) -> RequestBuilder<GHMatrixResponse> {
        let path = "/matrix"
        let URLString = GraphHopperAPI.basePath + path
        let parameters = body?.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<GHMatrixResponse>.Type = GraphHopperAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

}
