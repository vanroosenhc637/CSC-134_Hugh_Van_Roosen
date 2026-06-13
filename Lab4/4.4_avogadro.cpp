/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Print Avogadro's number (6.02214076x10^23) in E notation from a variable.
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare and define avogadro's number
    double avogadro = 6.02214076E23;

    //print
    cout << "Avogadro's number in E notation is " << avogadro;
    return 0;
}