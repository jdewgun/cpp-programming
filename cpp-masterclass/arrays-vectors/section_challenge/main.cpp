/*
Section Challenge
-----------------

- Declare two empty vectors of ints named vector1 and vector2
- Add 10 and 20 to vector1 dynamically using push_back
- Display the elements using at and size using size() method

- Add 100 and 200 to vector2 dynamically using push_back
- Display the elements using at and size using size() method

- Declare empty 2D vector called vector_2D
- Add vector1 and vector2 to vector_2D using push_back

- Display elements in vector_2D

- Change vector1.at(0) = 1000

- Display elements in vector_2D
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nSize of vector1: " << vector1.size() << endl;
    cout << "vector1 Element 1: " << vector1.at(0) << endl;
    cout << "vector1 Element 2: " << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nSize of vector2: " << vector2.size() << endl;
    cout << "vector2 Element 1: " << vector2.at(0) << endl;
    cout << "vector2 Element 2: " << vector2.at(1) << endl;

    vector<vector<int>> vector_2D;

    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);

    cout << "\nElements (Before Change of Vector 1) in Vector 2D:" << endl;
    cout << "----------------------" << endl;
    cout << "Element 1 in Vector 2D:" << endl;
    cout << vector_2D.at(0).at(0) << ", " << vector_2D.at(0).at(1) << endl;
    cout << "Element 2 in Vector 2D:" << endl;
    cout << vector_2D.at(1).at(0) << ", " << vector_2D.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "\nChanged Vector 1 position 1 Element: " << vector1.at(0) << endl;

    cout << "\nElements (After Change of Vector 1) in Vector 2D:" << endl;
    cout << "----------------------" << endl;
    cout << "Element 1 in Vector 2D:" << endl;
    cout << vector_2D.at(0).at(0) << ", " << vector_2D.at(0).at(1) << endl;
    cout << "Element 2 in Vector 2D:" << endl;
    cout << vector_2D.at(1).at(0) << ", " << vector_2D.at(1).at(1) << endl;
}
