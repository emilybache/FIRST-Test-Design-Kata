#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"

extern "C"
{
#include "sample.h"
}

using namespace std;

TEST_CASE ("Leap Years") {
    SECTION("normal year") {
        REQUIRE(isLeapYear(2003) == false);
    }
}


