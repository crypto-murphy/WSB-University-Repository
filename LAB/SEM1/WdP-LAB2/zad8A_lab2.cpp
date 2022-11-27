/***************************************** 
 Program name: zad8A_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 8: Napisz program, który będzie zawierał dwuwymiarową tablicę 
 zmiennych typu int o rozmiarze 10 x 10 elementów. Wypełnij zawartość 
 tej tablicy odpowiednimi wartościami w ten sposób, żeby całość tworzyła 
 tabliczkę mnożenia dla liczb od 11-20. Wypisz ją na ekranie.
    A. Zmodyfikuj program tak, aby pytał o dwie liczby z zakresu 11 do 20, 
       a nastepnie wypisywał tylko odpowiednią kolumnę i odpowiedni wiersz 
       z całej tablicy, tak aby na ich przecięciu pojawił się odpowiedni wynik.
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, j, x, y;
    
    cout << "Podaj liczbe z zakresu 11 do 20 (i): ";
    cin >> x;
    cout << "Podaj liczbe  11 do 20 (j): ";
    cin >> y;
    cout << endl;

if (x>=11 && x<=20 && y<=20)
    for(int j=11;j<=20;j++)
        {
        for(int i=11;i<=20;i++)
            if(x==j && y==i)
            cout << i*j << "\t" << endl;
            cout << " " << "\t" << endl;
                
          /*  else
                {
                cout << "." << endl;
                cout << "." << "\t";
                }        */
        }
        else
        {
        cout << "Wpisz poprawne wartosci!" << endl;
        }
    
    return 0;
}