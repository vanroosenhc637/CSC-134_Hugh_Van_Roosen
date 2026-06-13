/*
Author: Hugh Van Roosen
Date: 6/1/2026
Purpose: Print the title of my favorite movie and list some of the characters.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare variables
    int x, v, t;
    //set known variables
    v = 80;
    t = 2;

    //calculate
    x = v*t;

    //print
    cout << "Traveling for " << t << " hours at " << v << " mph will take you " << x << " miles.\n";
    return 0;
}