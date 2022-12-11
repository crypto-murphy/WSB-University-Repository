/***************************************** 
 Program name: zad2_lab5.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 2: Utwórz tablicę znakową tekst[] zawierającą następujący komunikat: 
         "zainicjowana tablica znakowa". Napisz program przeszukujący podaną 
         tablicę i wypisujący ilość wystąpień w powyższym komunikacie litery 
         podanej na wstępie programu przez użytkownika. Pamiętaj, że ostatnim 
         znakiem zainicjowanej tablicy znakowej jest znak '\0'.
 Created: 2022-12-11
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    
    char tekst[]="zainicjowana tablica znakowa";
    char znak;
    int licznik=0;
    
    cout<<"Podaj szukany znak: ";
    cin>>znak;
    
    for (int i=0; tekst[i]!='\0'; i++)
    {
        if (znak==tekst[i]);
            licznik++;
    }
    cout<<"Ilosc wystapien: "<<licznik;


    return 0;
}