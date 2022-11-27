/***************************************** 
 Program name: zad8_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 8: Napisz program, który będzie zawierał dwuwymiarową tablicę 
 zmiennych typu int o rozmiarze 10 x 10 elementów. Wypełnij zawartość 
 tej tablicy odpowiednimi wartościami w ten sposób, żeby całość tworzyła 
 tabliczkę mnożenia dla liczb od 11-20. Wypisz ją na ekranie.
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{

for(int j=11;j<=20;j++)
    {
    for(int i=11;i<=20;i++)
    cout << i*j << "\t";
    cout << endl;
    }
return 0;
}
