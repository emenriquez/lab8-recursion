// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
#include <iostream>
using namespace std;

#include "recursionLab.h" 

TEST_CASE("lineOfStars") {
    CHECK_NOTHROW(lineOfStars(1));
    CHECK(lineOfStars(5) == "*****");
    CHECK(lineOfStars(8) == "********");
    CHECK(lineOfStars(0) == "");
    CHECK_NOTHROW(lineOfStars(-1));
}

TEST_CASE("power") {
    CHECK(power(1, 3) == 1.f);
    CHECK(power(3,3) == 27.f);
    CHECK(power(3.14, 4) == (3.14f*3.14f*3.14f*3.14f));
    CHECK(power(-1, 0) == 1.f); 
}

TEST_CASE("stars") {
    CHECK_NOTHROW(stars(5));
    CHECK_NOTHROW(stars(0));
    CHECK_NOTHROW(stars(-1));
}

TEST_CASE("isPalindromeR") {
    CHECK(isPalindromeR("banana") == false);
    CHECK(isPalindromeR("") == true);
    CHECK(isPalindromeR("o") == true);
    CHECK(isPalindromeR("tacocat") == true);
    CHECK(isPalindromeR("recursion") == false);
}

TEST_CASE("reverse") {
    CHECK(reverse("banana") == "ananab");
    CHECK(reverse("tacocat") == "tacocat");
    CHECK(reverse("universe") == "esrevinu");

    CHECK_NOTHROW(reverse(""));
    CHECK(reverse("") == "");
}