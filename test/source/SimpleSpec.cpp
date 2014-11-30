#include <muffin/api/Simple.hpp>

#include <catch.hpp>

SCENARIO("Simple", "[example]") {
    GIVEN("A simple object") {
        muffin::api::Simple simple;
        WHEN("asked") {
            THEN("it gives us the answer") {
                REQUIRE(simple.theAnswer() == 42);
            }
        }
    }
}
