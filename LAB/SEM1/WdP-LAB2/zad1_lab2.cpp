/***************************************** 
 Program name: imieNazwisko.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 1ABC: Przy użyciu instrukcji for utwórz program, który wypisze na ekranie 
 wartości drugiej i trzeciej potęgi dla liczb z zakresu od 1 .. 15. Sformatuj
 wypisywany tekst kolumnami w taki sposób aby w jednym wierszu były wypisywane 
 dana liczba i jej druga i trzecia potęga.
 A. Zmodyfikuj swój program tak, aby w przypadku kiedy wszystkie trzy liczby są 
    liczbami parzystymi wypisywał w czwartej kolumnie tekst: PARZYSTE! Wykorzystaj
    w tym celu zagnieżdżone instrukcje if...else.
 B. Zastanów się, czy istnieje możliwość uproszczenia konstrukcji programu poprzez
    modyfikację jego algorytmu.
 C. Spróbuj zastąpić instrukcję if poprzez odpowiednie wyrażenie warunkowe, tak aby 
    efekt działania programu był ten sam.
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