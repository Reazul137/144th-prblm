#include<iostream>
using namespace std;
int main()
{
    float cel, kel;

    cout << "\n\n Convert temperature in Celsius to kelvin : \n";
    cout << "------------------------------------------------\n";

    cout << "Input the temperature in Celsius : ";
    cin >> cel;

    kel = cel + 273.15;

    cout <<"Temperature in Celsius : "<< cel <<"Converted in kelvin temperature is "<< kel<< endl;
    return 0;
}
