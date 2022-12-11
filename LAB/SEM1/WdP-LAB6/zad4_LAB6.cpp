/***************************************** 
 Program name: zad4_LAB6.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: Napisz program wykonujący na dwóch zadanych przez użytkownika 
         liczbach całkowitych z przedziału <1..9> operacje modulo i wypisujący 
         wynik działania w postaci komunikatu tekstowego (np. dla 1 % 4 wynik: "jeden")
 Created: 2022-12-11
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int dzielna, dzielnik;

    cout << "Podaj dzielną: ";
    cin >> dzielna;

    cout << "Podaj dzielnik: ";
    cin >> dzielnik;

    int modulo=dzielna%dzielnik;

    switch(modulo)
    {
        case 0: cout << "zero"; break;
        case 1: cout << "jeden"; break;
        case 2: cout << "dwa"; break;
        case 3: cout << "trzy"; break;
        case 4: cout << "cztery"; break;
        case 5: cout << "pięć"; break;
        case 6: cout << "sześć"; break;
        case 7: cout << "siedem"; break;
        case 8: cout << "osiem"; break;
        case 9: cout << "dziewięć"; break;
        default: cout << "????"; break;
    }
}