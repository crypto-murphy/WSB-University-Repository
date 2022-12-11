/***************************************** 
 Program name: przelicznikEuroPln.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 1: Napisz program, który będzie przeliczał walutę euro na złotówki (przyjmij kurs euro = 4,7 zł).
         Użyj zmiennych typu float i zastosuj jak najbardziej intuicyjne nazewnictwo zmiennych. Program
         ma pobierać kwotę w euro ze standardowego wejścia, a kwotę w złotówkach wypisywać na standardowe
         wyjście.
 Created: 2022-12-10
 Ver. 1.00 
 *****************************************/

#include <iostream>
using namespace std;

int main()
{
     float kwota;

     cout << "Podaj wartosc Euro: ";
     cin >> kwota;
     cout << kwota * 4.7 << " PLN" << endl;
}