#include <iostream>

using namespace std;

int main()
{
    int sum;
    for (int i = 1; i <= 15; i += 2)
    {
        sum += i;
    }
    cout << "The sum value: " << sum;

    return 0
}