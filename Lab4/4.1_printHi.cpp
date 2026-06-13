/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Print a set of three character literals to produce "Hi!"
*/

//include iostream for I/O
#include <iostream>
//use standard namespace
using namespace std;

int main(){
    //delcare variables and set character literals
    char char1, char2, char3;
    char1 = 'H';
    char2 = 'i';
    char3 = '!';

    cout << char1 << char2 << char3;

    return 0;
}