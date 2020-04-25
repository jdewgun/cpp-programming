#include <iostream>

using namespace std;

int main()
{
    cout << "Integer to Day Converter";
    cout << "Enter a value between 1 - 7: ";

    int day_code;
    cin >> day_code;

    switch (day_code)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    default:
        cout << "Error - illegal day code";
        break;
    }
}