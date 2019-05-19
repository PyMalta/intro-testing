# File:  tc_simple_number.rb

require_relative "simple_number"
require "test/unit"
 
class TestSimpleNumber < Test::Unit::TestCase
 
  def test_simple
    assert_equal(4, SimpleNumber.new(2).add(2) )
    assert_equal(6, SimpleNumber.new(2).multiply(3) )
  end

  def test_wrong_type
    assert_raise() {
      SimpleNumber.new('foo')
    }
  end
 
end
