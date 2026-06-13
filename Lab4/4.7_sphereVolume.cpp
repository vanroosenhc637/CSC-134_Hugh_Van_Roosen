/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Take a given value and calculate the area of a sphere with that value as the radius. Use the forumla V = (4/3)(pi)r^3 and r=7.
*/

//include iostream for I/O
#include <iostream>
//include math for exponents
#include <math.h>
//use standard namespace
using namespace std;

int main(){
    //delcare and initialize variables
    double radius = 7, pi = 3.1415, area;
    
    //calculate
    area = 4.0/3 * pi * pow(radius, 3);

    //print
    cout << "The area of a sphere with a radius of " << radius << " is: " << area << ".";

    return 0;
}