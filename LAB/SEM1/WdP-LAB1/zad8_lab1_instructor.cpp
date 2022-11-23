/***************************************** 
 Program name: zad8_lab1_instructor.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 8: Utwórz w nowym programie zmienne różnych typów: int, float i char i przypisz im wartości stałych 25, 3.14, ‘p’.
 Sprawdź rezultaty operacji przypisania pomiędzy zmiennymi poszczególnych typów. Czy wszystkie takie operacje są 
 dozwolone? Jaki jest ich efekt. Sprawdź rezultaty operacji dodawania pomiędzy zmiennymi poszczególnych typów. 
 Czy wszystkie takie operacje są dozwolone? Jaki jest ich efekt.
 Created: 2022-11-19
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
     int zmienna_int;
     char zmienna_char;
     float zmienna_float;

     zmienna_int=3.99;

     cout << "Zmienna int: " << zmienna_int << endl;

     zmienna_int='p';

     cout << "Zmienna int: " << zmienna_int << endl;

     zmienna_char=112;

     cout << "Zmienna char: " << zmienna_char << endl;





    return 0;
}