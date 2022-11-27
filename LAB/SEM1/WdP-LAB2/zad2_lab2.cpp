/***************************************** 
 Program name: zad2_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 2: Napisz program, który wypisze na 
 ekranie odpowiednio sformatowaną tabliczkę 
 mnożenia dla liczb od 1 do 10. Użyj do tego 
 celu dwóch zagnieżdżonych instrukcji for.
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
for(int j=1;j<=10;j++)
    {
    for(int i=1;i<=10;i++)
        cout << i*j << "\t";
        cout << endl;
    }
    
return 0;
}