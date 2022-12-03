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
     while(population<=1000000000)
{
     hour = hour++; //or hour + 1
     population = population *2;

     std::cout >> "Time remaining: " << hour << ". Total population: " << population << endl;
}
    return 0;
}