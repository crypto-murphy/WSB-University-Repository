/******************************************************* 
 Program name: zad7_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 7: Przy użyciu pętli while napisz program, który
         będzie zliczał sumę kodów znaków wpisanych przez 
         użytkownika i wypisywał ją na ekranie, aż do 
         momentu kiedy suma ta przekroczy 1000.
 Created: 2022-11-27
 Ver. 1.00 
 *******************************************************/

#include <iostream>

using namespace std;

int main()
{
 int suma;
 char znak;

 while(suma<=1000) 

   {
    cout << "\n" <<"Wpisz dowolny znak z klawiatury: ";
    cin >> znak;
    suma += int(znak);
    if(suma<=1000)
    cout << "Suma dotychczasowych znakow: " << suma;
   }

 suma -= int(znak);
 cout << "\n" << "Suma Twoich wszystkich znakow wynosi juz " << suma << " i nie przekracza 1000." << endl;
 cout << "Twoj ostatni wpisany znak --> " << znak << " <-- jest rowny " << int(znak) << " i dodany do " << suma <<  " przekracza 1000!";
 
 return 0;
}


