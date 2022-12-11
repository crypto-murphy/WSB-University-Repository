/***************************************** 
 Program name: dwieTabliceProsteLogowanie.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: Napisz program, symulujący bardzo proste logowanie. Ma on wczytywać nazwę
         i hasło użytkownika (oba podawane w postaci liczby całkowitej) i sprawdzać 
         czy hasło jest prawidłowe. Zapamiętaj kilku użytkowników, którzy mogą się 
         „logować” w tablicy.
 Created: 2022-12-10
 Ver. 1.00 
 *****************************************/

#include <iostream>
using namespace std;

int main()
{
   int uzytkownicy[]={11,22,33,44,55};
   int hasla[]={1,2,3,4,5};
   int login, haslo, indeks;
   bool czyJestUzytkownik=false;

   cout << "Podaj login: ";
   cin >> login;

   cout << "Podaj haslo: ";
   cin >> haslo;

   for(int i=0;i<5;i++)
     if(login==uzytkownicy[i])
     {
          czyJestUzytkownik=true;
          indeks=i;
          break;
     }

   if(!czyJestUzytkownik) cout << "Nie ma takiego uzytkownika!";
   else
   {
       if(hasla[indeks]==haslo) cout << "Jestes zalogowany.";
       else cout << "Niepoprawne haslo.";
   }
}

