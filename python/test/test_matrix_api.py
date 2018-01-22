# coding: utf-8

"""
    GraphHopper Directions API

    You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.  # noqa: E501

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import unittest

import swagger_client
from swagger_client.api.matrix_api import MatrixApi  # noqa: E501
from swagger_client.rest import ApiException


class TestMatrixApi(unittest.TestCase):
    """MatrixApi unit test stubs"""

    def setUp(self):
        self.api = swagger_client.api.matrix_api.MatrixApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_matrix_get(self):
        """Test case for matrix_get

        Matrix API  # noqa: E501
        """
        pass

    def test_matrix_post(self):
        """Test case for matrix_post

        Matrix API Post  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()
