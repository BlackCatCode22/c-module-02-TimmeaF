#include <iostream>

int getAnIntFromTheUser() {
    int userInput;
    std::cout << "Please enter an integer: ";
    std::cin >> userInput;
    return userInput;
}

// Function to compare two integers and return the greater one
int compareTwoInts(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to sum two integers
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    // Get two integers from the user
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    // Compare the two integers
    int greater = compareTwoInts(num1, num2);
    std::cout << "The greater of " << num1 << " and " << num2 << " is: " << greater << std::endl;

    // Sum the two integers
    int sum = sumTwoInts(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}