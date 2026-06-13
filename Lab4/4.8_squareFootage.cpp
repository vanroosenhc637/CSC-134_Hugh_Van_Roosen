/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Take a given pair of values and calculate the square footage of a house. Length is 50 and width is 30. Use A = length * width.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare and initialize variables
    int length = 50, width = 32, area;
    
    //calculate
    area = length * width;

    //print
    cout << "The square footage of a house with a length of " << length << " and a width of " << width << " is " << area << " square feet.";

    return 0;
}