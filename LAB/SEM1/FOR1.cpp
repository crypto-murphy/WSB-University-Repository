/***************************************** 
 Program name: FOR1.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-09
 Ver. 1.00 
 *****************************************/

#include <iostream>
#include <windows.h>

using namespace std;

string name; int x;

int main()
{
    cout << "Type your name: ";
    cin  >> name;
    cout << "Type your number: ";
    cin >> x;     
      for(int i=1; i<=x; i++)
{
      Sleep(700);
      cout << i << ". " << name << endl;
}
    return 0;
}