#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}


TEST_CASE("test options of the bonus pay table")
{
	REQUIRE(get_sales_commission(100) == 5.0);
	REQUIRE(get_sales_commission(750) == 45.0);
	REQUIRE(get_sales_commission(1100) == 77.0);
	REQUIRE(get_sales_commission(1750) == 140.0);
}