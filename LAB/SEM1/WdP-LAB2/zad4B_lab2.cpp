/***************************************** 
 Program name: zad4B_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: Napisz program wypisujący na ekranie w odrębnych liniach znak
 wraz z jego kodem ASCII, dla znaków ASCII o wartościach z zakresu od 32 do 128.
   B. Rozszerz program aby wypisywał jeszcze informacje dla znaków od 1 do 31.
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int kod;
    char znak;
    for(int kod=32; kod<=128; kod++) 
    {
        znak = kod;
        cout << kod << "\t" << znak << "\n";
    }

    for(int kod=1; kod<=31; kod++) 
    {
        znak = kod;
        cout << kod << "\t" << znak << "\n";
    }

    return 0;
}
