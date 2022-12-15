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
  int numer_indeksu;
  cout << "Podaj swój numer indeksu: ";
  cin >> numer_indeksu;

  int wysokosc = numer_indeksu % 10 + 5;
  int szerokosc = numer_indeksu % 10 + 6;

  for (int i = 0; i < szerokosc; ++i) 
  {
    cout << "#";
  }
  cout << endl;

  for (int i = 0; i < wysokosc - 2; ++i) 
  {
    cout << "#";
    for (int j = 0; j < szerokosc - 2; ++j) 
    {
      cout << " ";
    }
    cout << "#" << endl;
  }

  for (int i = 0; i < szerokosc; ++i) 
  {
    cout << "#";
  }
  cout << endl;

  return 0;
}
