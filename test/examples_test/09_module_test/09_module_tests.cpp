#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference parameter") {

	int num = 0, num1 = 0;
	ref_ptr(num, &num1);
	
	REQUIRE(num == 10);
	REQUIRE(num == 20);
}

TEST_CASE("Test class memberwise copy")
{
	Vector v(3);
	Vector v1=v;

	REQUIRE(v.Size()==v1.Size());
}

TEST_CASE("Test class dynamic copy")
{
	Vector v(3);
	Vector v1=v;
	v[0]=5;

	REQUIRE(v[0]) !=v1[0]);
}

