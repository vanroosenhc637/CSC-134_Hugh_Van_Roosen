/*
Author: Hugh Van Roosen
Date: 6/13/2026
Purpose: Take a given value and calculate the area of a circle with that value as the radius. Use the forumla A = (pi)r^2 and r=19.
*/

//include iostream for I/O
#include <iostream>
//include math for exponents
#include <math.h>
//use standard namespace
using namespace std;

int main(){
    //delcare and initialize variables
    double radius = 19, pi = 3.1415, area;
    
    //calculate
    area = pi * pow(radius , 2);

    //print
    cout << "The area of a circle with a radius of " << radius << " is: " << area << ".";

    return 0;
}