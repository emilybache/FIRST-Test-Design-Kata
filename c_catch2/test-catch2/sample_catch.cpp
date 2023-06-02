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
    SECTION("normal leap year") {
        REQUIRE(isLeapYear(2004) == true);
    }
    SECTION("atypical normal year") {
        REQUIRE(isLeapYear(1900) == false);
    }
    SECTION("atypical leap year") {
        REQUIRE(isLeapYear(2000) == true);
    }
}

TEST_CASE("FizzBuzz") {
    char result[9];
    SECTION("normal number") {
        fizzBuzz(result, 1);
        REQUIRE(string(result) == "1");
    }
    SECTION("fizz number") {
        fizzBuzz(result, 3);
        REQUIRE(string(result) == "Fizz");
    }
    SECTION("buzz number") {
        fizzBuzz(result, 5);
        REQUIRE(string(result) == "Buzz");
    }
    SECTION("fizzbuzz number") {
        fizzBuzz(result, 15);
        REQUIRE(string(result) == "FizzBuzz");
    }
}

TEST_CASE("closest to zero") {
    SECTION("positive numbers") {
        int input[] = {11,2,1, 9};
        int result = closestToZero(input, 4);
        REQUIRE(result == 1);
    }
    SECTION("negative numbers") {
        int input[] = {-11,-2,-1, -9};
        int result = closestToZero(input, 4);
        REQUIRE(result == -1);
    }
    SECTION("negative and positive numbers") {
        int input[] = {11,-2,1, 9};
        int result = closestToZero(input, 4);
        REQUIRE(result == 1);
    }
    SECTION("empty list") {
        int input[] = {};
        int result = closestToZero(input, 0);
        REQUIRE(result == INT_MAX);
    }
}

