/***************************************** 
 Program name: tabliceTabliczkaMnozenia.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 5: Napisz program wypisujący tabliczkę mnożenia 5 zadanych
         liczb rzeczywistych (Liczby przechowuj w tablicy).
 Created: 2022-12-10
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
     float tablica[5];

     for(int i=0;i<5;i++)
     {
        cout << "tablica[" << i << "]=";
        cin >> tablica[i];
     }

     for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cout << tablica[i]*tablica[j] << "\t";
        cout << endl;

    return 0;
}