#include <muffin/api/simple.hpp>

#include <catch.hpp>

SCENARIO("Simple", "[example]") {
    GIVEN("A simple object") {
        muffin::api::simple simple;
        WHEN("asked") {
            THEN("it gives us the answer") {
                REQUIRE(simple.theAnswer() == 42);
            }
        }
    }
}
