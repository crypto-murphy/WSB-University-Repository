/***************************************** 
 Program name: zad5_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 5: Napisz program, który pobierze od użytkownika 5 
 liczb rzeczywistych i umieści je w odpowiedniej tablicy:
    A. Wypisz te wszystkie liczby w pojedynczej linii jedna po drugiej.
    B. Zmodyfikuj program w ten sposób aby podczas wpisywania liczb liczył 
       na bieżąco ich sumę i średnią i wypisywał na ekranie, np.: Wprowadź 
       1 liczbę: 3.14 Suma wprowadzonych liczb: 3.14, średnia: 3.14 Wprowadź 
       2 liczbę: 6.28 Suma wprowadzonych liczb: 9.42, średnia: 4.71
    C. Zmodyfikuj kawałek kodu wypisujący wszystkie liczby w ten sposób, aby 
       w przypadku liczb z zakresu od -5 do 5 (ale z wyłączeniem 0 ) program 
       wypisywał tekst TAJNA a w pozostałych przypadkach wypisywał liczbę. 
       Zapisz ten sam warunek przy pomocy innych operatorów.
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include<iostream>

using namespace std;

int main()
{
    float tablica[5];
    float suma=0;

    for(int i=0;i<5;i++)   //i++;   ->   i=i+1;
    {
        cout << "tablica[" << i << "]=";
        cin >> tablica[i];
        suma=suma+tablica[i];  //suma+=tablica[i];
        cout << "suma=" << suma << "\tsrednia=" << suma/(i+1) << endl;
    }

    for(int i=0;i<5;i++)
    {

        if(((tablica[i]>=-5)&&(tablica[i]<=5))&&(tablica[i]!=0))
            cout << "TAJNA" << "\t";
        else
            cout << tablica[i] << "\t";
        //cout << endl;
    }
}
