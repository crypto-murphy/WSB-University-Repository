/***************************************** 
 Program name: ATM_PIN_Code.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-09
 Ver. 1.00 
 *****************************************/

#include <iostream>

using namespace std;

string PIN;

int main()
{
     cout << "Welcome to ATM of CrisisBank Inc.\n";
     cout << "To verify your useless VISA card, enter yout PIN code: ";
     cin >> PIN;

     if(PIN=="1234"){
  
      cout << "Your PIN has been accepted!\n";

       }else{
         
         cout << "Attempt nr 2. Please try again: ";
         cin >> PIN;
       
          if(PIN=="1234"){
       
           cout << "Your PIN has been accepted!\n";
        
            }else{ 
         
              cout << "Last attempt nr 3. Please try again: ";
              cin >> PIN;

               if(PIN=="1234"){
                cout << "Your PIN has been accepted!\n";

                 }else{ 
         
                   cout << "Your card has been locked. Please contact your Bank!";
       }

    return 0;
}}}    