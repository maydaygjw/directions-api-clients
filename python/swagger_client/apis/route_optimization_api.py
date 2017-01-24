# coding: utf-8

"""
    GraphHopper Directions API

    With the GraphHopper Directions API you get reliable and fast web services for routing and more with world wide coverage. We offer A-to-B routing via the Routing API optionally with turn instructions and elevation data as well as route optimization with various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API. 

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import sys
import os
import re

# python 2 and python 3 compatibility library
from six import iteritems

from ..configuration import Configuration
from ..api_client import ApiClient


class RouteOptimizationApi(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    Ref: https://github.com/swagger-api/swagger-codegen
    """

    def __init__(self, api_client=None):
        config = Configuration()
        if api_client:
            self.api_client = api_client
        else:
            if not config.api_client:
                config.api_client = ApiClient()
            self.api_client = config.api_client

    def get_solution(self, key, job_id, **kwargs):
        """
        Return the solution associated to the jobId
        This endpoint returns the solution of a large problems. You can fetch it with the job_id, you have been sent. 
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_solution(key, job_id, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str key: your API key (required)
        :param str job_id: Request solution with jobId (required)
        :return: Response
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_solution_with_http_info(key, job_id, **kwargs)
        else:
            (data) = self.get_solution_with_http_info(key, job_id, **kwargs)
            return data

    def get_solution_with_http_info(self, key, job_id, **kwargs):
        """
        Return the solution associated to the jobId
        This endpoint returns the solution of a large problems. You can fetch it with the job_id, you have been sent. 
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_solution_with_http_info(key, job_id, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str key: your API key (required)
        :param str job_id: Request solution with jobId (required)
        :return: Response
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['key', 'job_id']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_solution" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'key' is set
        if ('key' not in params) or (params['key'] is None):
            raise ValueError("Missing the required parameter `key` when calling `get_solution`")
        # verify the required parameter 'job_id' is set
        if ('job_id' not in params) or (params['job_id'] is None):
            raise ValueError("Missing the required parameter `job_id` when calling `get_solution`")


        collection_formats = {}

        resource_path = '/vrp/solution/{jobId}'.replace('{format}', 'json')
        path_params = {}
        if 'job_id' in params:
            path_params['jobId'] = params['job_id']

        query_params = {}
        if 'key' in params:
            query_params['key'] = params['key']

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.\
            select_header_accept(['application/json'])

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.\
            select_header_content_type(['application/json'])

        # Authentication setting
        auth_settings = []

        return self.api_client.call_api(resource_path, 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='Response',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def post_vrp(self, key, body, **kwargs):
        """
        Solves vehicle routing problems
        This endpoint for solving vehicle routing problems, i.e. traveling salesman or vehicle routing problems, and returns the solution. 
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.post_vrp(key, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str key: your API key (required)
        :param Request body: Request object that contains the problem to be solved (required)
        :return: JobId
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.post_vrp_with_http_info(key, body, **kwargs)
        else:
            (data) = self.post_vrp_with_http_info(key, body, **kwargs)
            return data

    def post_vrp_with_http_info(self, key, body, **kwargs):
        """
        Solves vehicle routing problems
        This endpoint for solving vehicle routing problems, i.e. traveling salesman or vehicle routing problems, and returns the solution. 
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.post_vrp_with_http_info(key, body, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str key: your API key (required)
        :param Request body: Request object that contains the problem to be solved (required)
        :return: JobId
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['key', 'body']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method post_vrp" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'key' is set
        if ('key' not in params) or (params['key'] is None):
            raise ValueError("Missing the required parameter `key` when calling `post_vrp`")
        # verify the required parameter 'body' is set
        if ('body' not in params) or (params['body'] is None):
            raise ValueError("Missing the required parameter `body` when calling `post_vrp`")


        collection_formats = {}

        resource_path = '/vrp/optimize'.replace('{format}', 'json')
        path_params = {}

        query_params = {}
        if 'key' in params:
            query_params['key'] = params['key']

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        if 'body' in params:
            body_params = params['body']
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.\
            select_header_accept(['application/json'])

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.\
            select_header_content_type(['application/json'])

        # Authentication setting
        auth_settings = []

        return self.api_client.call_api(resource_path, 'POST',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='JobId',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)
