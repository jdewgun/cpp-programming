#include <iostream>

using namespace std;

int main()
{
    const int valid_age = 16;
    int age;
    bool has_car;
    cout << "\nWelcome to the Driving School" << endl;
    cout << "\nEnter your age: " << endl;

    cin >> age;

    cout << "\nDo you have a car (true/false): " << endl;
    cin >> has_car;

    if (age >= valid_age)
    {
        if (has_car == true)
        {
            cout << "\nYes - you can drive!";
        }
        else
        {
            cout << "\nSorry, you need to buy a car before you can drive!";
        }
    }
    else
    {
        cout << "\nSorry, come back in " << (valid_age - age)
             << " years and be sure you own a car when you come back."
             << endl;
    }

    return 0;
}