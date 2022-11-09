/***************************************** 
 Program name: test23.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-09
 Ver. 1.00 
 *****************************************/

#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
 
      for (int i=10; i>=0; i--)    
      {
        Sleep(1000);
        system("cls");
        cout << i << endl;

      }
      system("cls");
      cout << "BOOM!!!\n" << endl;

    return 0;
}