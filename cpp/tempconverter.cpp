#include <iostream>
using namespace std;

int main(){
    // This program should prompt the user, to input a temperature in Fahrenheit
    // then is should convert and print out the Celsius and Kelvin equivalent temperature
    double fahrenheit, celsius, kelvin;
    cout << "Please input a temperature in Fahrenheit!" << endl;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32.0)*(5.0/9.0); // This fraction returns a float, before I had use 5/9 -> 0, as it would return the nearest floored integer
    kelvin = celsius+273.15;
    cout << fahrenheit << " Fahrenheit in Celsius is " << celsius << endl;
    cout << "And in Kelvin, it is " << kelvin << endl;
    return 0;
}
