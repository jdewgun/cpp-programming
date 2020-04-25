/*
* Prompt for input in Cents (Assume it is always greater than 0)

* Print Out The following information
- 1 dollar is 100 cents
- 1 quarter is 25 cents
- 1 dime is 10 cents
- 1 nickel is 5 cents
- 1 penny is 1 cent

* The program should provide the information on how to convert the input to
* proper change
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    const double cents_in_dollar{100},
        cents_in_quarter{25},
        cents_in_dime{10},
        cents_in_nickel{5},
        cents_in_penny{1};

    double input_cents;

    cout << "\nEnter Number of Cents: " << endl;
    cin >> input_cents;

    double change{};

    int dollar_value = input_cents / cents_in_dollar;
    change = fmod(input_cents, cents_in_dollar);
    int quarter_value = change / cents_in_quarter;
    change = fmod(change, cents_in_quarter);
    int dime_value = change / cents_in_dime;
    change = fmod(change, cents_in_dime);
    int nickel_value = change / cents_in_nickel;
    change = fmod(change, cents_in_nickel);
    int penny_value = change / cents_in_penny;

    cout << "\nTotal Change: " << change << endl;

    cout << "\nChange to be provided: " << endl;
    cout << "==========================" << endl;
    cout << "Dollars: " << dollar_value << endl;
    cout << "Quarters: " << quarter_value << endl;
    cout << "Dimes: " << dime_value << endl;
    cout << "Nickels: " << nickel_value << endl;
    cout << "Pennies: " << penny_value << endl;
    return 0;
}