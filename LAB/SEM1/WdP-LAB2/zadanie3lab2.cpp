/***************************************** 
 Program name: zadanie3lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

{
    int podanaLiczba, iloczyn ,suma=0;

    cout << "Podaj Twoja naturalna, dodatnia liczbe: ";
    cin >> podanaLiczba;
    
    int i=0;
        while (i<=podanaLiczba)
        {
            suma=suma+i;
            i++;
            
        }
        

  cout << "SUMA WYRAZOW W CIAGU KONCZACYM SIE NA " <<podanaLiczba<< " WYNOSI:   "<<suma<< endl;
}
