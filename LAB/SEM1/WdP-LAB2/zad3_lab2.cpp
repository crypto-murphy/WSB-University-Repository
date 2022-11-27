/***************************************** 
 Program name: zad3_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 3: Napisz program, który pobierze od  użytkownika liczbę naturalną dodatnią, policzy 
 dla tej liczby sumę ciągu kolejnych liczb naturalnych od 1 do tej właśnie liczby i wypisze
 otrzymaną wartość na ekranie.
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int podanaLiczba, suma=0;

    cout << "Podaj liczbe naturalna: ";
    cin >> podanaLiczba;
    
    int i=0;
    while (i<=podanaLiczba)
    {
        suma=suma+i;
        i++;
    }

    cout << "Suma wyrazow w ciagu konczacym sie na " << podanaLiczba << " wynosi: " << suma << endl;

return 0;
}
