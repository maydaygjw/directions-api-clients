# coding: utf-8

"""
    GraphHopper Directions API

    With the GraphHopper Directions API you get reliable and fast web services for routing and more with world wide coverage. We offer A-to-B routing via the Routing API optionally with turn instructions and elevation data as well as route optimization with various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API. 

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import os
import sys
import unittest

import swagger_client
from swagger_client.rest import ApiException
from swagger_client.models.activity import Activity


class TestActivity(unittest.TestCase):
    """ Activity unit test stubs """

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testActivity(self):
        """
        Test Activity
        """
        model = swagger_client.models.activity.Activity()


if __name__ == '__main__':
    unittest.main()
