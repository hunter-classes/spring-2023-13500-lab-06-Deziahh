#include "caesar.h"
#include "vigenere.h"
#include <iostream>
#include <string>


int main() {
    std::string plaintext = "Hello, World!";
    int rshift = 3;
    std::string ciphertext = encryptCaesar(plaintext, rshift);
    std::cout << "Plaintext: " << plaintext << std::endl;
    std::cout << "Ciphertext: " << ciphertext << std::endl;
    
    std::string keyword = "cake";
    std::string vin_ciphertext = encryptVigenere(plaintext, keyword);
    std::cout << "Plaintext: " << plaintext << std::endl;
    std::cout << "Ciphertext: " << vin_ciphertext << std::endl;


    return 0;
}
