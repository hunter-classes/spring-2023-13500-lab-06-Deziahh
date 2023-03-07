#include <iostream>
//#include "funcs.h"

int main() {
    std::string input;

  // Prompt the user for input
    std::cout << "Enter a line of text: ";
    getline(std::cin, input);

  // Output each character and its ASCII code
  for (char c : input) {
    std::cout << c << " " << static_cast<int>(c) << std::endl;
  }

  return 0;
}
