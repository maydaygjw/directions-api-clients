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
    ///  Class for testing MatrixApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class MatrixApiTests
    {
        private MatrixApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new MatrixApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of MatrixApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' MatrixApi
            //Assert.IsInstanceOfType(typeof(MatrixApi), instance, "instance is a MatrixApi");
        }

        
        /// <summary>
        /// Test MatrixGet
        /// </summary>
        [Test]
        public void MatrixGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string key = null;
            //List<string> point = null;
            //string fromPoint = null;
            //string toPoint = null;
            //List<string> outArray = null;
            //string vehicle = null;
            //var response = instance.MatrixGet(key, point, fromPoint, toPoint, outArray, vehicle);
            //Assert.IsInstanceOf<GHMatrixResponse> (response, "response is GHMatrixResponse");
        }
        
        /// <summary>
        /// Test MatrixPost
        /// </summary>
        [Test]
        public void MatrixPostTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string key = null;
            //GHMatrixRequest body = null;
            //var response = instance.MatrixPost(key, body);
            //Assert.IsInstanceOf<GHMatrixResponse> (response, "response is GHMatrixResponse");
        }
        
    }

}
