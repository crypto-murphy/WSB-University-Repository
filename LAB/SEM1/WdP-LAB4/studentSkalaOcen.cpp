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
 int x;

   cout << "Podaj liczbe punktow, jaka uzyskales: ";

   cin >> x;

   if(x>=0 && x<=34) cout << "Niedostateczny";
   if(x>=35 && x<=50) cout << "Dopuszczajacy";
   if(x>=51 && x<=70) cout << "Dostateczny";
   if(x>=71 && x<=90) cout << "Dobry";
   if(x>=91 && x<=99) cout << "Bardzo dobry";
   if(x==100) cout << "Celujacy";
   if(x<0 || x >100) cout << "Wprowadzono nieprawidlowa ilosc punktow.";

   return 0;
}