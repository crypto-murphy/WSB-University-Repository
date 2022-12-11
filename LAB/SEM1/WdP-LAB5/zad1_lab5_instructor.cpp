/***************************************** 
 Program name: zad1_lab5.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 1: Napisz program zawierający tablicę znakową z tekstem: „Zawartość tablicy znakowej”.
         Wypisz n kolejnych znaków tablicy rozpoczynając od pozycji m. Wartości n i m są 
         podawane przez użytkownika.
 Created: 2022-12-11
 Ver. 1.00 
 *****************************************/

#include <iostream>
using namespace std;

int main()
{
    char tablica[]="Zawartosc tablicy znakowej";
    int pozycjaStartowa; //m
    int iloscZnakow; //n

    cout << "Podaj poczatkowa pozcyje: ";
    cin >> pozycjaStartowa;

    cout << "Podaj ilosc znakow: ";
    cin >> iloscZnakow;


    for(int i=pozycjaStartowa-1;((i<(pozycjaStartowa+iloscZnakow-1))&&(tablica[i]!='\0'));i++)
        cout << tablica[i];
}
