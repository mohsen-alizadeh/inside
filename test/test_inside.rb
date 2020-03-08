gem "minitest"
require "minitest/autorun"
require "inside"

class TestInside < Minitest::Test
  def test_parse
    ast = Inside.parse("1 + 1")
    pp "ast:"
    pp ast
  end
end
