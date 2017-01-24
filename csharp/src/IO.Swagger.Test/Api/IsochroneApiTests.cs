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
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;
using IO.Swagger.Model;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing IsochroneApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class IsochroneApiTests
    {
        private IsochroneApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new IsochroneApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of IsochroneApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' IsochroneApi
            //Assert.IsInstanceOfType(typeof(IsochroneApi), instance, "instance is a IsochroneApi");
        }

        
        /// <summary>
        /// Test IsochroneGet
        /// </summary>
        [Test]
        public void IsochroneGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string point = null;
            //string key = null;
            //int? timeLimit = null;
            //string vehicle = null;
            //int? buckets = null;
            //bool? reverseFlow = null;
            //var response = instance.IsochroneGet(point, key, timeLimit, vehicle, buckets, reverseFlow);
            //Assert.IsInstanceOf<GHIsochroneResponse> (response, "response is GHIsochroneResponse");
        }
        
    }

}
