#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
int find_area(int side);                         // Square
double find_area(double length, double breadth); // Rectangle

int find_area(int side)
{
    return (side * side);
}

double find_area(double length, double breadth)
{
    return (length * breadth);
}

void area_calc()
{
    int side{2};
    double length{4.5}, width{2.3};

    int square_area = find_area(side);
    double rectangle_area = find_area(length, width);

    cout << "The area of the square is " << square_area << "\n"
         << "The area of the rectangle is " << rectangle_area;
}
