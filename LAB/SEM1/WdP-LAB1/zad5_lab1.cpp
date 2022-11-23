/***************************************** 
 Program name: zad5_lab1.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 5: Napisz program, który wczyta liczbę (int)
 i jeżeli liczba ta będzie mniejsza od 5 wypisze na 
 ekran "To za mało", jeżeli większa od 10 wypisze 
 "To za dużo", w pozostałych przypadkach wypisze "Bingo!".
 Sformatuj wypisywane komunikaty tak, aby program był czytelny, użyj '\n' i '\t' lub spacji.
 Created: 2022-11-19
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
     cout << "Wpisz liczbe: \n";
    int x;
    cin >> x;

        if(x==5)
          cout << "\t BINGO!";

        else if(x<5)
          cout << "\t To za malo";

        else if(x>10)
          cout << "\t To za duzo";

    return 0;
}