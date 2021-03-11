#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test get_letter_grade_using_if", "verification") 
{
	REQUIRE(get_letter_grade_using_if(80) == "B");
	REQUIRE(get_letter_grade_using_if(93) == "A");
	REQUIRE(get_letter_grade_using_if(79) == "C");
	REQUIRE(get_letter_grade_using_if(63) == "D");
	REQUIRE(get_letter_grade_using_if(49) == "F");
	REQUIRE(get_letter_grade_using_if(-12) == "Number entered cannot give Letter Grade");
}

TEST_CASE("Test get_letter_grade_using_switch", "verification") 
{
	REQUIRE(get_letter_grade_using_switch(80)== "B");
	REQUIRE(get_letter_grade_using_switch(100)== "A");
	REQUIRE(get_letter_grade_using_switch(77)== "C");
	REQUIRE(get_letter_grade_using_switch(63)== "D");
	REQUIRE(get_letter_grade_using_switch(30)== "F");
	REQUIRE(get_letter_grade_using_switch(-3)== "Number entered cannot give Letter Grade");
}


