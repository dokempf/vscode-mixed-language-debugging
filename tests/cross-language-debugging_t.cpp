#include "catch2/catch.hpp"
#include "cross-language-debugging/cross-language-debugging.hpp"

using namespace crosslanguagedebugging;

TEST_CASE("add_one", "[adder]")
{
  REQUIRE(add_one(0) == 1);
  REQUIRE(add_one(123) == 124);
  REQUIRE(add_one(-1) == 0);
}
