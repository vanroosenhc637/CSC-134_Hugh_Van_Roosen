/*
Author: Hugh Van Roosen
Date: 6/1/2026
Purpose: Calculate the square root of a given number.
*/

//include iostream for I/O
#include <iostream>
//include cmath for square root function
#include <cmath>
//use standard namespace
using namespace std;

int main(){
    //declare variable
    double num;

    //ask user for a real num, store it in variable num
    cout << "Enter a real number: ";
    cin >> num;

    //calc and print result
    cout << "The square root of " << num << " is " << sqrt(num) << ".\n";

    //end
    return 0;
}