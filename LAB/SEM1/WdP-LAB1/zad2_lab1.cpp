/***************************************** 
 Program name: zad2_lab1.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 2: Napisz program, który wypisze na 
         ekran twoje imię i nazwisko.
 Created: 2022-11-19
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;


int main()
{
    string imie, nazwisko;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Nazywasz sie " << imie << " " << nazwisko << ".";

    return 0;
 
}