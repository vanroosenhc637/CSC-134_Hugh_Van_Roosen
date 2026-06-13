/*
Author: Hugh Van Roosen
Date: 6/11/2026
Purpose: Use three variables "verbiage, age, verbiage_end" to print "Today I am 25 years old!"
*/

//include iostream for I/O
#include <iostream>
//include string to use strings
#include <string>
//use standard namespace
using namespace std;


int main(){
    //declare strings and assign variables
    string verbiage, age, verbiage_end;verbiage = "Today I am ";
    age = "25";
    verbiage_end = " years old!";
    
    //print
    cout << verbiage << age << verbiage_end;

    return 0;
}