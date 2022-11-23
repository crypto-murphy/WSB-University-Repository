/***************************************** 
 Program name: zadanie4lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int kod;
    char znak;
    for(int i = 0; i >=32 || i <=128; i++) 
    {
        kod = i;
        znak = i;
        cout << kod << "\t" << znak << "\n";
    }

    return 0;
}