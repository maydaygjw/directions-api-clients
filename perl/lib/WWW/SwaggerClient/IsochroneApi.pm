=begin comment

GraphHopper Directions API

With the GraphHopper Directions API you get reliable and fast web services for routing and more with world wide coverage. We offer A-to-B routing via the Routing API optionally with turn instructions and elevation data as well as route optimization with various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API. 

OpenAPI spec version: 1.0.0

Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
package WWW::SwaggerClient::IsochroneApi;

require 5.6.0;
use strict;
use warnings;
use utf8; 
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::SwaggerClient::ApiClient;
use WWW::SwaggerClient::Configuration;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class   = shift;
    my (%self) = (
        'api_client' => WWW::SwaggerClient::ApiClient->instance,
        @_
    );

    #my $self = {
    #    #api_client => $options->{api_client}
    #    api_client => $default_api_client
    #}; 

    bless \%self, $class;

}


#
# isochrone_get
#
# Isochrone Request
# 
# @param string $point Specify the start coordinate (required)
# @param string $key Get your key at graphhopper.com (required)
# @param int $time_limit Specify which time the vehicle should travel. In seconds. The maximum depends on the subscribed package. (optional, default to 600)
# @param string $vehicle Possible vehicles are bike, car, foot and [more](https://graphhopper.com/api/1/docs/supported-vehicle-profiles/) (optional, default to car)
# @param int $buckets For how many sub intervals an additional polygon should be calculated. (optional, default to 1)
# @param boolean $reverse_flow If &#x60;false&#x60; the flow goes from point to the polygon, if &#x60;true&#x60; the flow goes from the polygon \&quot;inside\&quot; to the point. Example usage for &#x60;false&#x60;&amp;#58; *How many potential customer can be reached within 30min travel time from your store* vs. &#x60;true&#x60;&amp;#58; *How many customers can reach your store within 30min travel time.* (optional, default to false)
{
    my $params = {
    'point' => {
        data_type => 'string',
        description => 'Specify the start coordinate',
        required => '1',
    },
    'key' => {
        data_type => 'string',
        description => 'Get your key at graphhopper.com',
        required => '1',
    },
    'time_limit' => {
        data_type => 'int',
        description => 'Specify which time the vehicle should travel. In seconds. The maximum depends on the subscribed package.',
        required => '0',
    },
    'vehicle' => {
        data_type => 'string',
        description => 'Possible vehicles are bike, car, foot and [more](https://graphhopper.com/api/1/docs/supported-vehicle-profiles/)',
        required => '0',
    },
    'buckets' => {
        data_type => 'int',
        description => 'For how many sub intervals an additional polygon should be calculated.',
        required => '0',
    },
    'reverse_flow' => {
        data_type => 'boolean',
        description => 'If &#x60;false&#x60; the flow goes from point to the polygon, if &#x60;true&#x60; the flow goes from the polygon \&quot;inside\&quot; to the point. Example usage for &#x60;false&#x60;&amp;#58; *How many potential customer can be reached within 30min travel time from your store* vs. &#x60;true&#x60;&amp;#58; *How many customers can reach your store within 30min travel time.*',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'isochrone_get' } = { 
    	summary => 'Isochrone Request',
        params => $params,
        returns => 'GHIsochroneResponse',
        };
}
# @return GHIsochroneResponse
#
sub isochrone_get {
    my ($self, %args) = @_;

    # verify the required parameter 'point' is set
    unless (exists $args{'point'}) {
      croak("Missing the required parameter 'point' when calling isochrone_get");
    }

    # verify the required parameter 'key' is set
    unless (exists $args{'key'}) {
      croak("Missing the required parameter 'key' when calling isochrone_get");
    }

    # parse inputs
    my $_resource_path = '/isochrone';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'point'}) {
        $query_params->{'point'} = $self->{api_client}->to_query_value($args{'point'});
    }

    # query params
    if ( exists $args{'time_limit'}) {
        $query_params->{'time_limit'} = $self->{api_client}->to_query_value($args{'time_limit'});
    }

    # query params
    if ( exists $args{'vehicle'}) {
        $query_params->{'vehicle'} = $self->{api_client}->to_query_value($args{'vehicle'});
    }

    # query params
    if ( exists $args{'buckets'}) {
        $query_params->{'buckets'} = $self->{api_client}->to_query_value($args{'buckets'});
    }

    # query params
    if ( exists $args{'reverse_flow'}) {
        $query_params->{'reverse_flow'} = $self->{api_client}->to_query_value($args{'reverse_flow'});
    }

    # query params
    if ( exists $args{'key'}) {
        $query_params->{'key'} = $self->{api_client}->to_query_value($args{'key'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw()];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('GHIsochroneResponse', $response);
    return $_response_object;
}

1;
