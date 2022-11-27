/***************************************** 
 Program name: zad4A_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: [ZADANIE 4] Napisz program wypisujący na ekranie w odrębnych liniach znak
 wraz z jego kodem ASCII, dla znaków ASCII o wartościach z zakresu od 32 do 128.
   A. Zmodyfikuj program w ten sposób, aby w każdym wierszu była informacja na temat trzech kolejnych znaków.
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
        cout << kod << "\t" << kod << "\t" << znak << "\n";
    }

    return 0;
}