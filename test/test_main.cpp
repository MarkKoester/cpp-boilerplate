#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <lib/lib.h>

TEST_CASE("plusOne adds 1", "[plusOne]") {
    REQUIRE(plusOne(0) == 1);
    REQUIRE(plusOne(-1) == 0);
    REQUIRE(plusOne(5) == 6);
}
