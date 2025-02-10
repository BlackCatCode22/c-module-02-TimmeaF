#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;
    char continueReversing = 'y'; //change thius to a singler character

    std::cout << "Welcome to the String Reverser!" << std::endl;

    while (continueReversing == 'y' || continueReversing == 'Y') {
        // Ask the user for input
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);

        // Reverse the string
        std::reverse(input.begin(), input.end());

        // Display the reversed string
        std::cout << "Your reversed string is: " << input << std::endl;

        // Ask if the user wants to  reverse another string
        std::cout << "Would you like to reverse another string? (y/n)";
        std::cin >> continueReversing;
        std::cin. ignore(); // Ignore the newline left by std::cin
    }

    std::cout << "Thanks for using the String Reverser! Have a good day!" << std::endl;

    return 0;

}