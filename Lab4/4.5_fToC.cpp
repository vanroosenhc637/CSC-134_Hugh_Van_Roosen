/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Use the formula C = (F-32)*5/9 to calculate Fahrenheit to Celcius using floating point variables. Print the result.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //declare variables
    float degreeC;
    float degreeF;

    //grab Fahrenheit
    cout << "Enter a temperature in Fahrenheit to be converted to celcius: ";
    cin >> degreeF;

    //convert to C and print
    degreeC = (degreeF-32)*5/9;
    cout << "\nYour temperature in celcius is " << degreeC << " degrees.";

    return 0;
}