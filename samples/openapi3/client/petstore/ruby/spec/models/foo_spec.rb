=begin
#OpenAPI Petstore

#This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\

The version of the OpenAPI document: 1.0.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1-SNAPSHOT

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for Petstore::Foo
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'Foo' do
  before do
    # run before each test
    @instance = Petstore::Foo.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of Foo' do
    it 'should create an instance of Foo' do
      expect(@instance).to be_instance_of(Petstore::Foo)
    end
  end
  describe 'test attribute "bar"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
