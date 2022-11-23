/***************************************** 
 Program name: zad10_lab1.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 10: Napisz program, który wczyta ze standardowego strumienia wejściowego promień koła, 
 a następnie wypisze pole powierzchni tego koła (dla uproszczenia procesu tworzenia programu 
 przyjmij liczbę pi=3.14).
 Created: 2022-11-19
 Ver. 1.00 
 *****************************************/

#include <iostream>
#include <math.h>

using namespace std;
 
int main()
{
    float r,O,P;
    string Obwod,Pole;
    cout << "Witaj podaj dlugosc promienia: "; cin >> r;
   
        O=2*M_PI*r;
        cout<<"Obwod kol wynosi: " << O;
  
        P=M_PI*r*r;
        cout << " , a pole wynosi: "<< P << ".";
        
 
    return 0;
}