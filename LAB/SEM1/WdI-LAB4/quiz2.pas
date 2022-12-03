(***************************************** 
 Program name: quiz2.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 9: Napisz program, ktorym zadasz pytanie i bedziesz wczytywal 
         odpowiedz dopoki uzytkownik nie poda poprawnej odpowiedzi.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program quiz2;
uses crt;
var odp : string;

begin
    repeat
    begin
    writeln('Stolica Polski jest: ');
    readln(odp);
    if lowercase(odp)<>'warszawa' then 
    writeln('Sprobuj jeszcze raz!')
    end
    until
    lowercase(odp) = 'warszawa'; //  uppercase <-- WARSZAWA uodparniamy program przed wielkimi literami
readkey;
end.