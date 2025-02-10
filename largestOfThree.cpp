#include <iostream>
int main() {
    int num1, num2, num3;

    // Fun welcome message
    std::cout << " Welcome to the 'Biggest of the Three' Show! ";
    std::cout << "Today, we'll find out which number is the TRUE champion! ";

    // Ask the user for three integers
    std::cout << "Please enter the first contender: ";
    std::cin >> num1;

    std::cout << "Great choice! Now, enter the second contender: ";
    std::cin >> num2;

    std::cout << "Last but not least, the final contender: ";
    std::cin >> num3;

    // Determine the largest number using nested if statements
    int largest;

    std::cout << " Let the comparison begin... ";
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;  // num1 is the largest
        } else {
            largest = num3;  // num3 is the largest
        }
    } else {
        if (num2 >= num3) {
            largest = num2;  // num2 is the largest
        } else {
            largest = num3;  // num3 is the largest
        }
    }

    // Fun message showing the largest number
    std::cout << " Drumroll please... ";
    std::cout << "The TRUE champion, the biggest number of them all, is: "
              << largest << "!";

    // End with a playful message
    std::cout << "Thanks for playing! Don't forget to celebrate your champion! ";

    return 0;
}