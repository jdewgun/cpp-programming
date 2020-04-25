#include <iostream>

using namespace std;

int main()
{
    // We don't need to initialize the number var in the exercise in the class
    // however we'll initiate it here for our ease.

    int number = 23;
    int original_number = number;

    number *= 2;

    number += 9;

    number -= 3;

    number /= 2;

    number -= original_number;

    number %= 3;

    cout << "Number: " << number << endl;
    cout << "Original Number: " << original_number << endl;

    return 0;
}