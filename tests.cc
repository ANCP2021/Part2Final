#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;

int countChar(string s) {
    return s.length();
}

TEST_CASE("Count char") {
    SECTION("Tests for empty string") {
        CHECK(countChar("") == 0);
    }

    SECTION("Tests for string of someone's name") {
        CHECK(countChar("Alexander") == 9);
    }

    SECTION("Tests for string filled with random characters") {
        CHECK(countChar("ak3 ( g@&782ar 'si+`;b26a ?a#1") == 30);
    }

}