#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "caesar.h"
#include "decryption.h"

// add your tests here
TEST_CASE("shiftChar") {
    CHECK(shiftChar('a', 3) == 'd');
    CHECK(shiftChar('A', 3) == 'D');
    CHECK(shiftChar('z', 1) == 'a');
    CHECK(shiftChar('Z', 1) == 'A');
    CHECK(shiftChar(' ', 5) == ' ');
}

TEST_CASE("Caesar cipher decryption") {
    CHECK(decryptCaesar("Khoor zruog!", 3) == "Hello world!");
    CHECK(decryptCaesar("Ebiil tloia!", 5) == "Hello world!");
}

TEST_CASE("Vigenere cipher decryption") {
    CHECK(decryptVigenere("Lxfopvefrnhr", "lemon") == "lemonlemonle");
    CHECK(decryptVigenere("Hvszyatwwat", "orange") == "orangeorange");
}

TEST_CASE("Decryption with empty strings") {
    CHECK(decryptCaesar("", 3) == "");
    CHECK(decryptVigenere("", "lemon") == "");
}

TEST_CASE("Decryption with invalid inputs") {
    CHECK(decryptCaesar("Hello world!", -3) == "Khoor zruog!");
    CHECK(decryptVigenere("Hello world!", "") == "Hello world!");
}
