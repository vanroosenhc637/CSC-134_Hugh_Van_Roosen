/*
Author: Hugh Van Roosen
Date: 6/1/2026
Purpose: This program calculates the product of two integers.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

//multiply two numbers together and print the result
int main(){
    int num1 = 5;
    int num2 = 10;
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
    return 0;
}