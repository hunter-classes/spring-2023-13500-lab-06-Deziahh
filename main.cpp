#include "caesar.h"
#include <iostream>
#include <string>

int main() {
  std::string plaintext = "Hello, World!";
  int rshift = 3;
  std::string ciphertext = encryptCaesar(plaintext, rshift);
  std::cout << "Plaintext: " << plaintext << std::endl;
  std::cout << "Ciphertext: " << ciphertext << std::endl;

  return 0;
}
