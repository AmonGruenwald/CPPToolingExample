#include "library.h"
#include <catch2/catch.hpp>

SCENARIO("Using a simple library function", "[library]") {
    GIVEN("The library is used.") {
        // Function setup code
        WHEN("the user passes 1 to the AddOne function") {
            int value = AddOne(1);
            THEN("the function has to return 2") {
                REQUIRE(value == 2);
            }
        }
        WHEN("the user passes 2 to the AddOne function") {
            int value = AddOne(2);
            THEN("the function has to return 3") {
                REQUIRE(value == 3);
            }
        }
    }
}
