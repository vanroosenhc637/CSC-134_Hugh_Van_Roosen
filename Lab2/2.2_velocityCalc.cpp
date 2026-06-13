/*
Author: Hugh Van Roosen
Date: 6/1/2026
Purpose: Calculate velocity when given a time traveled and distance.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare variables
    int x, v, t;
    //set known variables
    x = 400;
    t = 4;

    //calculate
    v = x/t;

    //print
    cout << "To travel " << x << " miles in " << t << " hours, you would have to go " << v << " miles per hour.\n";
    return 0;
}