/*
Section Challenge
-----------------

- Prompt User for Large Rooms and Small Rooms
- Provide Estimate with:
    - Price Per Small Room: 25
    - Price Per Large Room: 35
    - Tax Rate: 0.06
    - Validity of Estimate: 30 days
*/

#include <iostream>

using namespace std;

int main()
{
    const double tax_rate = 0.06;
    const double price_small_room = 25;
    const double price_large_room = 35;
    const int estimate_validity = 30;
    int small_rooms;
    int large_rooms;

    cout << "Enter the number of small rooms you'd like cleaned: ";
    cin >> small_rooms;

    cout << "Enter the number of large rooms you'd like cleaned: ";
    cin >> large_rooms;

    cout << "Estimate for cleaning service";
    cout << "\nNumber of Small Rooms: " << small_rooms;
    cout << "\nNumber of Large Rooms: " << large_rooms;
    cout << "\nPrice for Small Rooms: " << price_small_room;
    cout << "\nPrice for Large Rooms: " << price_large_room;

    int total_cost = (price_small_room * small_rooms) + (price_large_room * large_rooms);
    double total_tax = (price_small_room * small_rooms * tax_rate) + (price_large_room * large_rooms * tax_rate);

    cout << "\nCost: €" << total_cost;
    cout << "\nTax: €" << total_tax;
    cout << "\n------------------------------------------------";
    cout << "\nTotal Sum Payable: €" << total_cost + total_tax;
    cout << "\nThis estimate is valid for: " << estimate_validity << " days\n";

    return 0;
}