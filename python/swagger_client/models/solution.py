# coding: utf-8

"""
    GraphHopper Directions API

    You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.  # noqa: E501

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from swagger_client.models.route import Route  # noqa: F401,E501
from swagger_client.models.solution_unassigned import SolutionUnassigned  # noqa: F401,E501


class Solution(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'costs': 'int',
        'distance': 'int',
        'time': 'int',
        'transport_time': 'int',
        'max_operation_time': 'int',
        'waiting_time': 'int',
        'no_vehicles': 'int',
        'no_unassigned': 'int',
        'routes': 'list[Route]',
        'unassigned': 'SolutionUnassigned'
    }

    attribute_map = {
        'costs': 'costs',
        'distance': 'distance',
        'time': 'time',
        'transport_time': 'transport_time',
        'max_operation_time': 'max_operation_time',
        'waiting_time': 'waiting_time',
        'no_vehicles': 'no_vehicles',
        'no_unassigned': 'no_unassigned',
        'routes': 'routes',
        'unassigned': 'unassigned'
    }

    def __init__(self, costs=None, distance=None, time=None, transport_time=None, max_operation_time=None, waiting_time=None, no_vehicles=None, no_unassigned=None, routes=None, unassigned=None):  # noqa: E501
        """Solution - a model defined in Swagger"""  # noqa: E501

        self._costs = None
        self._distance = None
        self._time = None
        self._transport_time = None
        self._max_operation_time = None
        self._waiting_time = None
        self._no_vehicles = None
        self._no_unassigned = None
        self._routes = None
        self._unassigned = None
        self.discriminator = None

        if costs is not None:
            self.costs = costs
        if distance is not None:
            self.distance = distance
        if time is not None:
            self.time = time
        if transport_time is not None:
            self.transport_time = transport_time
        if max_operation_time is not None:
            self.max_operation_time = max_operation_time
        if waiting_time is not None:
            self.waiting_time = waiting_time
        if no_vehicles is not None:
            self.no_vehicles = no_vehicles
        if no_unassigned is not None:
            self.no_unassigned = no_unassigned
        if routes is not None:
            self.routes = routes
        if unassigned is not None:
            self.unassigned = unassigned

    @property
    def costs(self):
        """Gets the costs of this Solution.  # noqa: E501

        overall costs of solution  # noqa: E501

        :return: The costs of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._costs

    @costs.setter
    def costs(self, costs):
        """Sets the costs of this Solution.

        overall costs of solution  # noqa: E501

        :param costs: The costs of this Solution.  # noqa: E501
        :type: int
        """

        self._costs = costs

    @property
    def distance(self):
        """Gets the distance of this Solution.  # noqa: E501

        overall travel distance in meters  # noqa: E501

        :return: The distance of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._distance

    @distance.setter
    def distance(self, distance):
        """Sets the distance of this Solution.

        overall travel distance in meters  # noqa: E501

        :param distance: The distance of this Solution.  # noqa: E501
        :type: int
        """

        self._distance = distance

    @property
    def time(self):
        """Gets the time of this Solution.  # noqa: E501

        overall transport time in ms  # noqa: E501

        :return: The time of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._time

    @time.setter
    def time(self, time):
        """Sets the time of this Solution.

        overall transport time in ms  # noqa: E501

        :param time: The time of this Solution.  # noqa: E501
        :type: int
        """

        self._time = time

    @property
    def transport_time(self):
        """Gets the transport_time of this Solution.  # noqa: E501

        overall transport time in ms  # noqa: E501

        :return: The transport_time of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._transport_time

    @transport_time.setter
    def transport_time(self, transport_time):
        """Sets the transport_time of this Solution.

        overall transport time in ms  # noqa: E501

        :param transport_time: The transport_time of this Solution.  # noqa: E501
        :type: int
        """

        self._transport_time = transport_time

    @property
    def max_operation_time(self):
        """Gets the max_operation_time of this Solution.  # noqa: E501

        operation time of the longest route in ms  # noqa: E501

        :return: The max_operation_time of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._max_operation_time

    @max_operation_time.setter
    def max_operation_time(self, max_operation_time):
        """Sets the max_operation_time of this Solution.

        operation time of the longest route in ms  # noqa: E501

        :param max_operation_time: The max_operation_time of this Solution.  # noqa: E501
        :type: int
        """

        self._max_operation_time = max_operation_time

    @property
    def waiting_time(self):
        """Gets the waiting_time of this Solution.  # noqa: E501

        total waiting time in ms  # noqa: E501

        :return: The waiting_time of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._waiting_time

    @waiting_time.setter
    def waiting_time(self, waiting_time):
        """Sets the waiting_time of this Solution.

        total waiting time in ms  # noqa: E501

        :param waiting_time: The waiting_time of this Solution.  # noqa: E501
        :type: int
        """

        self._waiting_time = waiting_time

    @property
    def no_vehicles(self):
        """Gets the no_vehicles of this Solution.  # noqa: E501

        number of employed vehicles  # noqa: E501

        :return: The no_vehicles of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._no_vehicles

    @no_vehicles.setter
    def no_vehicles(self, no_vehicles):
        """Sets the no_vehicles of this Solution.

        number of employed vehicles  # noqa: E501

        :param no_vehicles: The no_vehicles of this Solution.  # noqa: E501
        :type: int
        """

        self._no_vehicles = no_vehicles

    @property
    def no_unassigned(self):
        """Gets the no_unassigned of this Solution.  # noqa: E501

        number of jobs that could not be assigned to final solution  # noqa: E501

        :return: The no_unassigned of this Solution.  # noqa: E501
        :rtype: int
        """
        return self._no_unassigned

    @no_unassigned.setter
    def no_unassigned(self, no_unassigned):
        """Sets the no_unassigned of this Solution.

        number of jobs that could not be assigned to final solution  # noqa: E501

        :param no_unassigned: The no_unassigned of this Solution.  # noqa: E501
        :type: int
        """

        self._no_unassigned = no_unassigned

    @property
    def routes(self):
        """Gets the routes of this Solution.  # noqa: E501

        An array of routes  # noqa: E501

        :return: The routes of this Solution.  # noqa: E501
        :rtype: list[Route]
        """
        return self._routes

    @routes.setter
    def routes(self, routes):
        """Sets the routes of this Solution.

        An array of routes  # noqa: E501

        :param routes: The routes of this Solution.  # noqa: E501
        :type: list[Route]
        """

        self._routes = routes

    @property
    def unassigned(self):
        """Gets the unassigned of this Solution.  # noqa: E501


        :return: The unassigned of this Solution.  # noqa: E501
        :rtype: SolutionUnassigned
        """
        return self._unassigned

    @unassigned.setter
    def unassigned(self, unassigned):
        """Sets the unassigned of this Solution.


        :param unassigned: The unassigned of this Solution.  # noqa: E501
        :type: SolutionUnassigned
        """

        self._unassigned = unassigned

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, Solution):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
