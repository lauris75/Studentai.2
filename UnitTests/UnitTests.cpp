#include "fun.h"
#include <vector>

#define CATCH_CONFIG_MAIN
#include"catch.hpp"

TEST_CASE("Didziausio ilgio radimas")
{
	REQUIRE(ilgiausias("Jonas", 10) == 10);
	REQUIRE(ilgiausias("Egle", 5) == 6);
	REQUIRE(ilgiausias("Egle", 6) == 6);
	REQUIRE(ilgiausias("Juozaitis", 5) == 11);
	REQUIRE(ilgiausias("Jonas", 5) == 7);
	REQUIRE(ilgiausias("studentai", 5) == 11);
}

TEST_CASE("Vidurkio skaiciavimas")
{
	std::vector<int> pazymiai = { 4,7,9,2,1,7 };
	REQUIRE(Galutinis(0, 8) == 4.8);
	REQUIRE(Galutinis(NDvidurkis(pazymiai), 6) == 5.6);
	REQUIRE(Galutinis(NDvidurkis(pazymiai), 5) == 5);
}

TEST_CASE("Namu darbu vidurkio skaiciavimas")
{
	std::vector<int> pazymiai = { 4,7,9,2,7,7 };
	REQUIRE(NDvidurkis(pazymiai) == 6);
}
