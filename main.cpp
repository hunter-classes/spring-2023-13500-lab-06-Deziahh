#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

#include <iostream>
#include <string>


int main() {
    std::cout << "Caesar Tests" << std::endl;
    std::string plaintext = "Hello, World!";
    int rshift = 3;
    std::string ciphertext = encryptCaesar(plaintext, rshift);
    std::cout << "Plaintext: " << plaintext << std::endl;
    std::cout << "Ciphertext: " << ciphertext << std::endl;
    
    std::cout << "\nVigenere Tests" << std::endl;
    std::string keyword = "cake";
    std::string vin_ciphertext = encryptVigenere(plaintext, keyword);
    std::cout << "Plaintext: " << plaintext << std::endl;
    std::cout << "Ciphertext: " << vin_ciphertext << std::endl;
    
    //ASK FOR PLAIN TEXT
    std::string plaintext2;
    std::cout << "\nEnter plaintext: ";
    getline(std::cin, plaintext2);
    
    std::cout << "\nCaesar Decryption Tests" << std::endl;
    int rs;
    
    std::cout << "Enter right shift for Caesar cipher: ";
    std::cin >> rs;
    std::string ciphertext2 = encryptCaesar(plaintext2, rs);
    std::cout << "Ciphertext: " << ciphertext2 << std::endl;
    std::string decryptedText = decryptCaesar(ciphertext2, rs);
    std::cout << "Decrypted text: " << decryptedText << std::endl;
    
    std::cout << "\nVingenere Decryption Tests" << std::endl;
    std::string keyword2;
    
    std::cout << "Enter keyword for Vigenere cipher: ";
    std::cin.ignore();
    getline(std::cin, keyword2);
    std::string ciphertext3 = encryptVigenere(plaintext2, keyword2);
    std::cout << "Ciphertext: " << ciphertext3 << std::endl;
    std::string decryptedText_V = decryptVigenere(ciphertext3, keyword2);
    std::cout << "Decrypted text: " << decryptedText_V << std::endl;

    return 0;
}
