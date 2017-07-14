=begin
#GraphHopper Directions API

#You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.

OpenAPI spec version: 1.0.0

Generated by: https://github.com/swagger-api/swagger-codegen.git

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for SwaggerClient::RouteResponse
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'RouteResponse' do
  before do
    # run before each test
    @instance = SwaggerClient::RouteResponse.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of RouteResponse' do
    it 'should create an instact of RouteResponse' do
      expect(@instance).to be_instance_of(SwaggerClient::RouteResponse)
    end
  end
  describe 'test attribute "paths"' do
    it 'should work' do
       # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "info"' do
    it 'should work' do
       # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
