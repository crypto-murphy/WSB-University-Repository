/***************************************** 
 Program name: zad1C_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 1D: Przy użyciu instrukcji for utwórz program, który wypisze na ekranie 
 wartości drugiej i trzeciej potęgi dla liczb z zakresu od 1 .. 15. Sformatuj
 wypisywany tekst kolumnami w taki sposób aby w jednym wierszu były wypisywane 
 dana liczba i jej druga i trzecia potęga. 
    D. Zmodyfikuj program w ten sposób, aby zliczał ilość sytuacji w których został
    wypisany powyższy tekst i aby na końcu wypisał tę liczbę.  
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int kolejne_kroki=0;
    for(int i=1;i<=15;i++)
    {
        cout << i << "\t" << i*i  << "\t"  << i*i*i;
        if(i%2==0) 
        {
            cout << "\tPARZYSTE";
            kolejne_kroki++;
        }
        cout << endl;
    }
    cout << "wypisano slowo PARZYSTE " << kolejne_kroki << " raz(y)." << endl;
    return 0;
}