#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
double fahrenheit_to_celsius(double fahrenheit_temperature);
double fahrenheit_to_kelvin(double fahrenheit_temperature);

void temperature_conversion(double fahrenheit_temperature)
{

    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

double fahrenheit_to_celsius(double fahrenheit_temperature)
{
    double celsius_temp = ((5.0 / 9.0) * (fahrenheit_temperature - 32));
    return round(celsius_temp);
}
double fahrenheit_to_kelvin(double fahrenheit_temperature)
{
    double kelvin_temp = ((5.0 / 9.0) * (fahrenheit_temperature - 32) + 273);
    return round(kelvin_temp);
}

int main()
{
    double fahrenheit_temperature;
    cout << "Enter Fahrenheit Temperature: " << endl;
    cin >> fahrenheit_temperature;

    temperature_conversion(fahrenheit_temperature);

    return 0;
}