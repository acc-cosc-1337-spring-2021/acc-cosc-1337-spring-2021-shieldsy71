#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}




TEST_CASE("Verify function tallies the number of G/C characters in a string", "returns a double percentage") 
{
	REQUIRE(get_gc_content("AGCTATAG")== .375);
	REQUIRE(get_gc_content("CGCTATAG")== .5);
}



TEST_CASE("Verify function reverses the string paramter", "returns a string") 
{
	REQUIRE(get_reverse_string("AGCTATAG")== "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG")== "GATATCGC");
}

/*

TEST_CASE("Verify function swaps character values A/T & G/C", "returns a string") 
{
	REQUIRE(get_dna_complement("AAAACCCGGT")== "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT")== "ATTTTCCGGG");
}

*/
