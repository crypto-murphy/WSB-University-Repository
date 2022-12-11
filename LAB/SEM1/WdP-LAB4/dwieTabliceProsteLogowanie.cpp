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

    int login[] = {112, 258, 784, 963};
    int pass[] = {888, 444, 225, 993};
    int l;
    int p;
    int status=0;
    
    cout << "Wpisz login: ";
    cin >> l;
    
    cout << "Wpisz haslo: ";
    cin >> p;
    
    for (int i=0; i<4; i++){
        if ((login[i]==l) && (pass[i]==p)) status+=status+1;
    }
    
   if (status==1) cout << "Logowanie udane";
       else cout << "Logowanie nie powiodło się";

}