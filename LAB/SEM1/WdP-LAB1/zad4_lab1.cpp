/***************************************** 
 Program name: zad4_lab1.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: Napisz program który pobiera ze
 standardowego wejścia liczbę i wypisuje 
 ją na standardowe wyjście.
 Created: 2022-11-19
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int liczba;
    
    cout << "Wpisz liczbe: ";
    cin >> liczba;
    cout << "Twoja liczba to: " << liczba;

    return 0;
}