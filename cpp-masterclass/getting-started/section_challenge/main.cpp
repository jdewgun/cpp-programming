#include <iostream>

/* The challenge is,
 1. Take user input
 2. Print Statement : "Amazing! That's my favourite number too"
 3. Suppose user enters 24, then print statement: No really! 24 is my favourite number too
*/

int main() {
    int users_favourite;
    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> users_favourite;
    std::cout << "Amazing! That's my favourite number too" << std::endl;
    std::cout << "No really! " << users_favourite << " is my favourite number too" << std::endl;

    return 0;
}