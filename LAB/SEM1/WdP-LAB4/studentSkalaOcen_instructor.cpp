/***************************************** 
 Program name: studentSkalaOcen.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 2: Napisz program, który pokaże na ekranie ocenę w zależności od punktów, jakie uzyskał student wg
         następującej skali ocen. Przy wyznaczaniu oceny sprawdź, w który przedział „trafia” podana przez 
         użytkownika liczba punktów używając rozbudowanych wyrażeń logicznych.
 Created: 2022-12-10
 Ver. 1.00 
 *****************************************/

#include <iostream>
using namespace std;

int main()
{
     int punkty;

     cout << "Podaj punktacje: ";
     cin >> punkty;
/*
     if(punkty<=50) cout << "ndst" << endl;
     if((punkty>=51) && (punkty<=60)) cout << "mrn" << endl;
     if((punkty>=61) && (punkty<=70)) cout << "dst" << endl;        <--- Pierwszy wariant programu
     if((punkty>=71) && (punkty<=80)) cout << "db" << endl;
     if((punkty>=81) && (punkty<=90)) cout << "bdb" << endl;
     if(punkty>=91) cout << "cel" << endl;                      */

     if(punkty<=50) cout << "ndst" << endl;
     else if(punkty<=60) cout << "mrn" << endl;
        else if(punkty<=70) cout << "dst" << endl;
            else if(punkty<=80) cout << "db" << endl;
                else if(punkty<=90) cout << "bdb" << endl;
                    else cout << "cel" << endl;
    return 0;
}