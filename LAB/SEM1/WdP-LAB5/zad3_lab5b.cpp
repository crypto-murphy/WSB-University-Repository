/***************************************** 
 Program name: zad3_lab5.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 3: Zdefiniuj trzy tablice znakowe przypisując im następujące wartości (stałe napisowe):
         tab1[]="zainicjowana", tab2[]="tablica", tab3[]="znakowa" oraz tablicę znakową scalone[]
         - tylu elementową by mogła pomieścić stałą napisową powstałą ze scalenia stałych napisowych 
         z tablic tab1[], tab2[] i tab3[]. Pamiętaj, że długość tablicy powinna być o jeden większa od
         długości tekstu, który zawiera, ponieważ ostatnim znakiem stałej napisowej jest znak '\0'.
         B. Posortuj elementy tablicy scalone[] (zastosuj jedną z prostych metod sortowania:
            przez "proste wstawianie" lub "proste wybieranie")
 Created: 2022-12-11
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
    char tab1[]="zainicjowana";
    char tab2[]="tablica";
    char tab3[]="znakowa";
    char scalone[100];

    int i=0;
    int j=0;
    while(tab1[i]!='\0')
    {
        scalone[j]=tab1[i];
        i++;
        j++;
    }

    i=0;
    while(tab2[i]!='\0')
    {
        scalone[j]=tab2[i];
        i++;
        j++;
    }

    i=0;
    while(tab3[i]!='\0')
    {
        scalone[j]=tab3[i];
        i++;
        j++;
    }
    scalone[j]='\0';

    cout << scalone << endl;

    for(int j=0;scalone[j]!='\0';j++)  // j < strlen(scalone)
        for(int i=1;scalone[i]!='\0';i++)  // i < strlen(scalone)
            if(scalone[i-1]>scalone[i])
            {
                char tmp=scalone[i];
                scalone[i]=scalone[i-1];
                scalone[i-1]=tmp;
            }

     cout << scalone  << endl;
}