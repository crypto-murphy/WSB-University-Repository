/***************************************** 
 Program name: tabliceCharWyraz.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 3: Zdefiniuj 5-elementową tablicę zawierającą elementy typu char i wypełnij ją znakami tak, 
         aby tworzyły jakiś wyraz (np. ‘c’,’h’,’l’,’u’,’p’). Następnie wypisz tablicę korzystając 
         z pętli for na standardowe wyjście. Użyj dyrektywy using namespace std;
 Created: 2022-12-10
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

int main()
{
     // char znaki[]={'c','h','l','u','p','\0'};            <-- Pierwszy wariant zadania \0 nullbyte
     char znaki[]="chlup";

     for(int i=0;i<5;i++)
        cout << znaki[i];

    return 0;
}