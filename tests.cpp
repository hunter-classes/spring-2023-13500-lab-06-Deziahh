#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"

// add your tests here
TEST_CASE("shiftChar") {
    CHECK(shiftChar('a', 3) == 'd');
    CHECK(shiftChar('A', 3) == 'D');
    CHECK(shiftChar('z', 1) == 'a');
    CHECK(shiftChar('Z', 1) == 'A');
    CHECK(shiftChar(' ', 5) == ' ');
}
