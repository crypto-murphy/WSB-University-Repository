/***************************************** 
 Program name: average3.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-08
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    double x, y, z;

    cout << "This software let you know average of three numbers. Type numbers below. Let's play!\n\n";
    cout << "Enter 'x'...\n";
    cin >> x;
    cout << "Enter 'y'...\n";
    cin >> y;
    cout << "Enter 'z'...\n";
    cin >> z;
    cout << "Average of " << x << ", " << y << ", and " << z  << " is " << (x+y+z)/3 << ".";

    return 0;
}