/***************************************** 
 Program name: zad4_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: [ZADANIE 4] Napisz program wypisujący na ekranie w odrębnych liniach znak
 wraz z jego kodem ASCII, dla znaków ASCII o wartościach z zakresu od 32 do 128.
   A. Zmodyfikuj program w ten sposób, aby w każdym wierszu była informacja na temat trzech kolejnych znaków.
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
    for(int i = 0; i >=32 || i <=128; i++) 
    {
        kod = i;
        znak = i;
        cout << kod << "\t" << znak << "\n";
    }

    return 0;
}