#include <Muffin/Simple.hpp>

#include <catch.hpp>

SCENARIO("Simple", "[example]") {
    GIVEN("A simple object") {
        Muffin::Simple simple;
        WHEN("asked") {
            THEN("it gives us the answer") {
                REQUIRE(simple.theAnswer() == 42);
            }
        }
    }
}
