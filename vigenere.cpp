#include "vigenere.h"
#include <iostream>

//write functions here

std::string encryptVigenere(std::string plaintext, std::string keyword) {
    std::string ciphertext = "";
    int keyword_index = 0;
    for (int i = 0; i < plaintext.length(); i++) {
        char plainchar = plaintext[i];
        char keychar = keyword[keyword_index];
        if (plainchar >= 'a' && plainchar <= 'z'){
            int plainoffset = plainchar - 'a';
            int keyoffset = keychar - 'a';
            int encryptedoffset = (plainoffset + keyoffset) % 26;
            char encryptedchar = encryptedoffset + 'a';
            ciphertext += encryptedchar;
            keyword_index = (keyword_index + 1) % keyword.length();
            
        } else if (plainchar >= 'A' && plainchar <= 'Z') {
            int plainoffset = plainchar - 'A';
            int keyoffset = keychar - 'a';
            int encryptedoffset = (plainoffset + keyoffset) % 26;
            char encryptedchar = encryptedoffset + 'A';
            ciphertext += encryptedchar;
            keyword_index = (keyword_index + 1) % keyword.length();
        } else {
            ciphertext += plainchar;
        }
    }
    return ciphertext;
}

