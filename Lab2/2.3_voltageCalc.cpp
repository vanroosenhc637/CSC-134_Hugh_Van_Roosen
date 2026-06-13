/*
Author: Hugh Van Roosen
Date: 6/1/2026
Purpose: Calculate voltage when given amperage and resistance.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare variables
    int i, v, r;
    //set known variables
    i = 10;
    r = 2;

    //calculate
    v = r*i;

    //print
    cout << "With an amperage of " << i << " amps and a resistance of " << r << " ohms, you have " << v << " volts.\n";
    return 0;
}