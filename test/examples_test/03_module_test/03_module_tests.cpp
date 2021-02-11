#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"if.h"
#include"if_else.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function", "treturn true if even")
{
	REQUIRE(is_even(4) == true);
	REQUIRE(is_even(5)==false);
}

TEST_CASE ("Test get generation function", "accept a year return generation for the period")
{
	REQUIRE(get_generation(1924) == "Invalid Year");
	REQUIRE(get_generation(1997) == "Centenial");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
}

TEST_CASE("Test menu funciton", "given number returns Option N string")
{
	REQUIRE(menu(1)== "Option 1");
	REQUIRE(menu(2)== "Option 2");
	REQUIRE(menu(3)== "Option 3");
	REQUIRE(menu(4)== "Option 4");
	REQUIRE(menu(5)== "Invalid Option");
}