/***************************************** 
 Program name: zad6_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 6: Spróbuj przewidzieć, co będzie wynikiem wykonania poniższego 
    programu oraz jakie będą wartości zmiennych w wyznaczonych momentach 
    wykonywania kodu. Sprawdź przy pomocy pracy krokowej i okienka Watch 
    swoje przewidywania.
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
        a=b=1;                // A.1
        a++;
        ++b;                  // A.2
    cout << a++ << endl;
    cout << ++b << endl;      // A.3

    return 0;
}