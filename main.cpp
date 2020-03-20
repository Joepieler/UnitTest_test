#include <ostream>

#define CATCH_CONFIG_MAIN
#include "externals/catch2/catch.hpp"

TEST_CASE("test 1") {
	int a = 1;
	int b = 2;
	REQUIRE(a == 1 );
	REQUIRE(b == 2);
}