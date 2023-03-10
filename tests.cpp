#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("shiftChar") {
  CHECK(shiftChar('a', 3) == 'd');
  CHECK(shiftChar('A', 3) == 'D');
  CHECK(shiftChar('z', 1) == 'a');
  CHECK(shiftChar('Z', 1) == 'A');
  CHECK(shiftChar(' ', 5) == ' ');
}

TEST_CASE("Caesar encryption") {
  CHECK(encryptCaesar("Hello World", 3) == "Khoor Zruog");
  CHECK(encryptCaesar("lemon", 3) == "ohprq");
}

TEST_CASE("Vingenere encryption") {
  CHECK(encryptVigenere("lemon", "love") == "wshsy");
  CHECK(encryptVigenere("Lemon", "apple") == "Rtbzr");
  CHECK(encryptVigenere("Lemon", "cake") == "Tewsp");
}

TEST_CASE("Caesar cipher decryption") {
  CHECK(decryptCaesar("ohprq", 3) == "lemon");
  CHECK(decryptCaesar("Ohprq", 3) == "Lemon");
}

TEST_CASE("Vigenere cipher decryption") {
  CHECK(decryptVigenere("wshsy", "love") == "lemon");
  CHECK(decryptVigenere("newsp", "cake") == "lemon");
  CHECK(decryptVigenere("Tewsp", "cake") == "Lemon");
  
}
