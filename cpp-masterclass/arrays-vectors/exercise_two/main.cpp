#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{10, 20, 30, 40, 50};

    cout << "\nElements in Vector: \n"
         << vec[0] << ", " << vec[1] << ", " << vec[2] << ", " << vec[3] << ", " << vec[4];

    vec.at(0) = 100;
    vec.at(vec.size() - 1) = 1000;

    cout << "\nElements in Vector:\n"
         << vec[0] << ", " << vec[1] << ", " << vec[2] << ", " << vec[3] << ", " << vec[4] << endl;

    return 0;
}