/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Add two floating point values together and print the resultant value.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //declare variable
    double num1, num2;

    //ask user for a floating point number, store it in variable num1
    cout << "Enter a number with a decimal: ";
    cin >> num1;

    //ask user for a floating point number, store it in variable num2
    cout << "Enter a second number with a decimal: ";
    cin >> num2;

    //calc and print result
    cout << num1 << " + " << num2 << " = " << num1+num2;

    //end
    return 0;
}