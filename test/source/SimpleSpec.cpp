#include <muffin/api/simple.hpp>

#include <catch.hpp>

SCENARIO("Simple", "[example]") {
    GIVEN("A simple object") {
        Muffin::Api::Simple simple;
        WHEN("asked") {
            THEN("it gives us the answer") {
                REQUIRE(simple.theAnswer() == 42);
            }
        }
    }
}