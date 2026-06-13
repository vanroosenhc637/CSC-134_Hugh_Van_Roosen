/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Write a program that calculates and prints a 2% temperature rise in three cities.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare variables and starting temp, each named after their city
    int nyc = 85;
    int denver = 88;
    int phoenix = 106;

    //print
    cout << "The temperatures in July are forecasted for:\n\tNew York City: " << nyc << "\n\tDenver: " << denver << "\n\t Phoenix: " << phoenix <<
    "\n\nThe temperatures are in danger of rising up to 2%. This would place the temperatures at: " <<
    "\n\tNew York City: " << nyc * 1.02 << "\n\tDenver: " << denver * 1.02 << "\n\tPhoenix: " << phoenix * 1.02;
    return 0;
}