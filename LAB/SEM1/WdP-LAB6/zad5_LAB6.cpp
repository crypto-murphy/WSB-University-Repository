/***************************************** 
 Program name: zad5_LAB6.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 5: Napisz program wypisujący liczby pierwsze z przedziału zadanego przez użytkownika programu.
         A. Zmodyfikuj program zamieniając użyte konstrukcje sterujące na inne (np. for, while, break, continue).
 Created: 2022-12-11
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int liczba,poczatekPrzedzialu,koniecPrzedzialu;
    bool czyPierwsza;

    cout << "Podaj początek przedziału: ";
    cin >> poczatekPrzedzialu;

    cout << "Podaj koniec przedziału: ";
    cin >> koniecPrzedzialu;


    for(liczba=poczatekPrzedzialu;liczba<=koniecPrzedzialu;liczba++)
    {
       czyPierwsza=true;
       for(int i=2;i<liczba;i++)
       if(liczba%i==0)
       {
           czyPierwsza=false;
           break;
       }

      if(czyPierwsza) cout << liczba << "\t";
    }
}
