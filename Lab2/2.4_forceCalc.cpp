/*
Author: Hugh Van Roosen
Date: 6/1/2026
Purpose: Calculate force in m/s^2 when given mass and acceleration.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare variables
    int F, m, a;
    //set known variables
    m = 10;
    a = 9.81;

    //calculate
    F = m*a;

    //print
    cout << "With a mass of " << m << " kilograms and an acceleration of " << a << " m/s^2, you have a force of " << F << " Newtons.\n";
    return 0;
}