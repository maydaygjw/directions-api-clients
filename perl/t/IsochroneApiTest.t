=begin comment

GraphHopper Directions API

With the GraphHopper Directions API you get reliable and fast web services for routing and more with world wide coverage. We offer A-to-B routing via the Routing API optionally with turn instructions and elevation data as well as route optimization with various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API. 

OpenAPI spec version: 1.0.0

Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by Swagger Codegen
# Please update the test cases below to test the API endpoints.
# Ref: https://github.com/swagger-api/swagger-codegen
#
use Test::More tests => 1; #TODO update number of test cases
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::SwaggerClient::IsochroneApi');

my $api = WWW::SwaggerClient::IsochroneApi->new();
isa_ok($api, 'WWW::SwaggerClient::IsochroneApi');

#
# isochrone_get test
#
{
    my $point = undef; # replace NULL with a proper value
    my $key = undef; # replace NULL with a proper value
    my $time_limit = undef; # replace NULL with a proper value
    my $vehicle = undef; # replace NULL with a proper value
    my $buckets = undef; # replace NULL with a proper value
    my $reverse_flow = undef; # replace NULL with a proper value
    my $result = $api->isochrone_get(point => $point, key => $key, time_limit => $time_limit, vehicle => $vehicle, buckets => $buckets, reverse_flow => $reverse_flow);
}


1;
