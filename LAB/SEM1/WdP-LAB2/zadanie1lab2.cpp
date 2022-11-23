/***************************************** 
 Program name: imieNazwisko.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-09
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;


int main()
{
    for(int i=1;i<=15;i++)
    {
        cout << i << "\t" << i*i  << "\t"  << i*i*i;
        if(i%2==0) cout << "\tPARZYSTE";
        cout << endl;
    }

    return 0;
}