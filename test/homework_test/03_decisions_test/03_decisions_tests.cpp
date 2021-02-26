#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test numeric grade function", "return letter grade")
{
	REQUIRE(get_letter_grade_using_if(93)=="A");
}



TEST_CASE("Test numeric grade using switch", "returns letter grade")
{
	REQUIRE(get_letter_grade_using_switch(92) == "A");
}