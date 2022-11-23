/***************************************** 
 Program name: zad5_lab1_instructor.cpp 
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
   int liczba;

   cout << "Podaj dowolną liczbe całkowita: ";
   cin >> liczba;

   if(liczba<5) cout << "To za malo" << endl;
   else
      if(liczba>10) cout << "To za duzo" << endl;
      else cout << "BINGO!";


   return 0;
}
