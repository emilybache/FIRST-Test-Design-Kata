#include "ApprovalTests.hpp"
#include "doctest/doctest.h"

#include "sample.h"

using namespace std;

TEST_CASE ("Sample") {
    SUBCASE("sample subcase") {
        REQUIRE(true == false);
    }
}



