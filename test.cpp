#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Signs of nums are correctly identfied", "[Sign]") {
    REQUIRE( Sign(10) == 1);
    REQUIRE( Sign(-10) == -1);
    REQUIRE( Sign(243250) == 1);
    REQUIRE( Sign(-423560) == -1);
    REQUIRE( Sign(0) == 1);    
}

TEST_CASE("Sums are accurately calculated", "[Sum]") {
    std::vector<int> nums1 = {1, 3, 6, 18};
    std::vector<int> nums2 = {-3, 4, 48, -24};

    REQUIRE( Sum(nums1) == 28);
    REQUIRE( Sum(nums2) == 25);
}

TEST_CASE("Products are accurately calculated", "[Product]") {
    std::vector<int> nums1 = {1, 3, 6, 18};
    std::vector<int> nums2 = {-3, 4, 48, -24};

    REQUIRE( Product(nums1) == 324);
    REQUIRE( Product(nums2) == 13824);
}