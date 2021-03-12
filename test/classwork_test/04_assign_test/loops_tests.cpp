#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
using std::string;
#include "for_ranged.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Test factorial function")
{
	REQUIRE(factorial(3)==6);
	REQUIRE(factorial(4)==24);
	REQUIRE(factorial(5)==120);
}

