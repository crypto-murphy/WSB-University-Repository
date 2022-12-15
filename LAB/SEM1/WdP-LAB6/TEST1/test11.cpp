/***************************************** 
 Program name: zad3_lab5.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 3: Zdefiniuj trzy tablice znakowe przypisując im następujące wartości (stałe napisowe):
         tab1[]="zainicjowana", tab2[]="tablica", tab3[]="znakowa" oraz tablicę znakową scalone[]
         - tylu elementową by mogła pomieścić stałą napisową powstałą ze scalenia stałych napisowych 
         z tablic tab1[], tab2[] i tab3[]. Pamiętaj, że długość tablicy powinna być o jeden większa od
         długości tekstu, który zawiera, ponieważ ostatnim znakiem stałej napisowej jest znak '\0'.
         A. Przepisz elementy tablicy tab1[], tab2[] oraz tab3[] to tablicy scalone[], tak by kolejne 
            jej elementy tworzyły komunikat: "zainicjowanatablicazanakowa". Monitoruj zawartość tablicy 
            scalone[] w kolejnych krokach programu za pomocą opcji Watch kompilatora i pracy krokowej.
 Created: 2022-12-11
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    char tablica[]="tojesttablicaznakowadozadanianumerdwa";

    int i=0;

    while(tablica[i]!='\0')
    {
        tablica[i];
        i=i+2;
    }


    scalone[j]='\0';

    cout << scalone;
}