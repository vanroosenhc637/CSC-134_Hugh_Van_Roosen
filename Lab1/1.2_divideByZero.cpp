/*
Author: Hugh Van Roosen
Date: 6/1/2026
Purpose: Divide a given number by zero.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

//divide a number by zero to get an error
int main(){
    int num = 15;
    int quotient = num / 0;
    cout << "The quotient of " << num << " and 0 is " << quotient << endl;
    return 0;
}