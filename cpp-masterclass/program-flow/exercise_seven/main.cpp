#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{0, 8, 5, 2, 3, 4, -99, 12, 2, 124};

    int count;
    size_t index = 0;
    while (index < vec.size() && vec.at(index) != -99)
    {
        count++;
        index++;
    }
    cout << "Total count before -99: " << count;
    return 0;
}