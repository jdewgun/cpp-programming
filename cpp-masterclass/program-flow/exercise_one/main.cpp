#include <iostream>

using namespace std;

int main()
{
    const int valid_age = 16;
    int age;
    cout << "\nWelcome to the Driving School" << endl;
    cout << "\nEnter your age: " << endl;

    cin >> age;

    if (age >= valid_age)
    {
        cout << "\nYes - you can drive!";
    }

    return 0;
}