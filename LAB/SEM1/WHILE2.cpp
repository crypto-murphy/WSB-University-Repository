/***************************************** 
 Program name: WHILE1.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-09
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int population=1; int hour=0;

int main()
{
     do
{
     hour = hour++;
     population = population *2;

     cout >> "Time remaining: " << hour << ". Total population: " << population << endl;
} while(population<=1000000000);

    return 0;
}