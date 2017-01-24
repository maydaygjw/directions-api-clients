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
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IGeocodingApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Execute a Geocoding request
        /// </summary>
        /// <remarks>
        /// This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>GHGeocodingResponse</returns>
        GHGeocodingResponse GeocodeGet (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null);

        /// <summary>
        /// Execute a Geocoding request
        /// </summary>
        /// <remarks>
        /// This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>ApiResponse of GHGeocodingResponse</returns>
        ApiResponse<GHGeocodingResponse> GeocodeGetWithHttpInfo (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Execute a Geocoding request
        /// </summary>
        /// <remarks>
        /// This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>Task of GHGeocodingResponse</returns>
        System.Threading.Tasks.Task<GHGeocodingResponse> GeocodeGetAsync (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null);

        /// <summary>
        /// Execute a Geocoding request
        /// </summary>
        /// <remarks>
        /// This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>Task of ApiResponse (GHGeocodingResponse)</returns>
        System.Threading.Tasks.Task<ApiResponse<GHGeocodingResponse>> GeocodeGetAsyncWithHttpInfo (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null);
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class GeocodingApi : IGeocodingApi
    {
        private IO.Swagger.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="GeocodingApi"/> class.
        /// </summary>
        /// <returns></returns>
        public GeocodingApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="GeocodingApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public GeocodingApi(Configuration configuration = null)
        {
            if (configuration == null) // use the default one in Configuration
                this.Configuration = Configuration.Default;
            else
                this.Configuration = configuration;

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }

        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.Configuration.ApiClient.RestClient.BaseUrl.ToString();
        }

        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        [Obsolete("SetBasePath is deprecated, please do 'Configuration.ApiClient = new ApiClient(\"http://new-path\")' instead.")]
        public void SetBasePath(String basePath)
        {
            // do nothing
        }

        /// <summary>
        /// Gets or sets the configuration object
        /// </summary>
        /// <value>An instance of the Configuration</value>
        public Configuration Configuration {get; set;}

        /// <summary>
        /// Provides a factory method hook for the creation of exceptions.
        /// </summary>
        public IO.Swagger.Client.ExceptionFactory ExceptionFactory
        {
            get
            {
                if (_exceptionFactory != null && _exceptionFactory.GetInvocationList().Length > 1)
                {
                    throw new InvalidOperationException("Multicast delegate for ExceptionFactory is unsupported.");
                }
                return _exceptionFactory;
            }
            set { _exceptionFactory = value; }
        }

        /// <summary>
        /// Gets the default header.
        /// </summary>
        /// <returns>Dictionary of HTTP header</returns>
        [Obsolete("DefaultHeader is deprecated, please use Configuration.DefaultHeader instead.")]
        public Dictionary<String, String> DefaultHeader()
        {
            return this.Configuration.DefaultHeader;
        }

        /// <summary>
        /// Add default header.
        /// </summary>
        /// <param name="key">Header field name.</param>
        /// <param name="value">Header field value.</param>
        /// <returns></returns>
        [Obsolete("AddDefaultHeader is deprecated, please use Configuration.AddDefaultHeader instead.")]
        public void AddDefaultHeader(string key, string value)
        {
            this.Configuration.AddDefaultHeader(key, value);
        }

        /// <summary>
        /// Execute a Geocoding request This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>GHGeocodingResponse</returns>
        public GHGeocodingResponse GeocodeGet (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null)
        {
             ApiResponse<GHGeocodingResponse> localVarResponse = GeocodeGetWithHttpInfo(key, q, locale, limit, reverse, point, provider);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Execute a Geocoding request This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>ApiResponse of GHGeocodingResponse</returns>
        public ApiResponse< GHGeocodingResponse > GeocodeGetWithHttpInfo (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null)
        {
            // verify the required parameter 'key' is set
            if (key == null)
                throw new ApiException(400, "Missing required parameter 'key' when calling GeocodingApi->GeocodeGet");

            var localVarPath = "/geocode";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (q != null) localVarQueryParams.Add("q", Configuration.ApiClient.ParameterToString(q)); // query parameter
            if (locale != null) localVarQueryParams.Add("locale", Configuration.ApiClient.ParameterToString(locale)); // query parameter
            if (limit != null) localVarQueryParams.Add("limit", Configuration.ApiClient.ParameterToString(limit)); // query parameter
            if (reverse != null) localVarQueryParams.Add("reverse", Configuration.ApiClient.ParameterToString(reverse)); // query parameter
            if (point != null) localVarQueryParams.Add("point", Configuration.ApiClient.ParameterToString(point)); // query parameter
            if (provider != null) localVarQueryParams.Add("provider", Configuration.ApiClient.ParameterToString(provider)); // query parameter
            if (key != null) localVarQueryParams.Add("key", Configuration.ApiClient.ParameterToString(key)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GeocodeGet", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<GHGeocodingResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (GHGeocodingResponse) Configuration.ApiClient.Deserialize(localVarResponse, typeof(GHGeocodingResponse)));
            
        }

        /// <summary>
        /// Execute a Geocoding request This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>Task of GHGeocodingResponse</returns>
        public async System.Threading.Tasks.Task<GHGeocodingResponse> GeocodeGetAsync (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null)
        {
             ApiResponse<GHGeocodingResponse> localVarResponse = await GeocodeGetAsyncWithHttpInfo(key, q, locale, limit, reverse, point, provider);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Execute a Geocoding request This endpoint provides forward and reverse geocoding. For more details, review the official documentation at: https://graphhopper.com/api/1/docs/geocoding/ 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="key">Get your key at graphhopper.com</param>
        /// <param name="q">If you do forward geocoding, then this would be a textual description of the adress you are looking for. If you do reverse geocoding this would be in lat,lon. (optional)</param>
        /// <param name="locale">Display the search results for the specified locale. Currently French (fr), English (en), German (de) and Italian (it) are supported. If the locale wasn&#39;t found the default (en) is used. (optional)</param>
        /// <param name="limit">Specify the maximum number of returned results (optional)</param>
        /// <param name="reverse">Set to true to do a reverse Geocoding request (optional)</param>
        /// <param name="point">The location bias in the format &#39;latitude,longitude&#39; e.g. point&#x3D;45.93272,11.58803 (optional)</param>
        /// <param name="provider">Can be either, default, nominatim, opencagedata (optional)</param>
        /// <returns>Task of ApiResponse (GHGeocodingResponse)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<GHGeocodingResponse>> GeocodeGetAsyncWithHttpInfo (string key, string q = null, string locale = null, int? limit = null, bool? reverse = null, string point = null, string provider = null)
        {
            // verify the required parameter 'key' is set
            if (key == null)
                throw new ApiException(400, "Missing required parameter 'key' when calling GeocodingApi->GeocodeGet");

            var localVarPath = "/geocode";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (q != null) localVarQueryParams.Add("q", Configuration.ApiClient.ParameterToString(q)); // query parameter
            if (locale != null) localVarQueryParams.Add("locale", Configuration.ApiClient.ParameterToString(locale)); // query parameter
            if (limit != null) localVarQueryParams.Add("limit", Configuration.ApiClient.ParameterToString(limit)); // query parameter
            if (reverse != null) localVarQueryParams.Add("reverse", Configuration.ApiClient.ParameterToString(reverse)); // query parameter
            if (point != null) localVarQueryParams.Add("point", Configuration.ApiClient.ParameterToString(point)); // query parameter
            if (provider != null) localVarQueryParams.Add("provider", Configuration.ApiClient.ParameterToString(provider)); // query parameter
            if (key != null) localVarQueryParams.Add("key", Configuration.ApiClient.ParameterToString(key)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GeocodeGet", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<GHGeocodingResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (GHGeocodingResponse) Configuration.ApiClient.Deserialize(localVarResponse, typeof(GHGeocodingResponse)));
            
        }

    }
}
