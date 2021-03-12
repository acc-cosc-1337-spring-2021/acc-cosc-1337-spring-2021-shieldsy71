#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "do_while.h"
#include "for_ranged.h"
#include<string>
#include<vector>
#include"vec.h"


using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares function")
{
	REQUIRE(sum_of_squares(3)==14);
	REQUIRE(sum_of_squares(4)==30);
	REQUIRE(sum_of_squares(5)==55);

}








TEST_CASE("Test calculate weekly pay for salaried employees")
{
	REQUIRE(calculate_weekly_pay(52000) == 1000);
}

TEST_CASE("Test calculate weekly pay for hourly employees")
{
	REQUIRE(calculate_weekly_pay(40,10) == 4000);
}


TEST_CASE("Test a string for ranged by value")
{
	std::string name = "John";
	loop_string_w_for_range(name);
	REQUIRE(name == "John");
}

TEST_CASE("Test string for ranged by reference param")
{
	std::string name = "John";
	loop_string_w_for_range_ref(name);
	REQUIRE(name == "John");
}

TEST_CASE("Test vector as value parameter")
{
	vector<int> expected_values{10, 3, 2};
	vector<int> nums{10, 3, 2};

	loop_vector_w_index_ref(nums);

	REQUIRE(nums == expected_values);

}