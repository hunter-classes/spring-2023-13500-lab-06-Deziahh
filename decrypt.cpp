#include <iostream>
#include <string>
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int rshift) {
    
    std::string plaintext = "";
    for (int i = 0; i < ciphertext.length(); i++) {
        char c = ciphertext[i];
        if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A') - rshift + 26) % 26 + 'A';
        } else if (c >= 'a' && c <= 'z') {
            c = ((c - 'a') - rshift + 26) % 26 + 'a';
        }
        plaintext += c;
    }
    return plaintext;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
    std::string plaintext = "";
    int keywordIndex = 0;
    for (int i = 0; i < ciphertext.length(); i++) {
        char c = ciphertext[i];
        char k = keyword[keywordIndex];
        // Decrypt uppercase letters
        if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + 26 - (k - 'A')) % 26 + 'A';
            keywordIndex = (keywordIndex + 1) % keyword.length();
        } else if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + 26 - (k - 'a')) % 26 + 'a';
            keywordIndex = (keywordIndex + 1) % keyword.length();
        }
        plaintext += c;
    }
    return plaintext;
}
