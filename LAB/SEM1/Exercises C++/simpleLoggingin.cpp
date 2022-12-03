/***************************************** 
 Program name: simpleLoggingin.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-09
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

string login, password;

int main()
{
     cout << "Type login: ";
     cin >> login;
     cout << "Type password: ";
     cin >> password;

      if ((login=="admin") && (password=="12345"))
{
        cout << "Logging in has been successfull!";
    
      }else {

        cout << "Wrong username or password!";
      }

    return 0;
}
