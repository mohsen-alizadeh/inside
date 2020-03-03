gem "minitest"
require "minitest/autorun"
require "inside"

class TestInside < Minitest::Test
  def test_sanity
    puts "methods"
    puts Inside.public_instance_methods.inspect
    assert_equal 'hello world', Inside.hello_world
  end
end
