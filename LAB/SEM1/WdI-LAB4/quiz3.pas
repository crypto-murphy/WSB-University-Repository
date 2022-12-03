(***************************************** 
 Program name: quiz3.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 10: Napisz program, ktorym zadasz pytanie i bedziesz wczytywal 
          odpowiedz dopoki uzytkownik nie poda poprawnej odpowiedzi.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program quiz3;
uses crt;
var odp : string;

begin
    repeat
    begin
        write('Czy dostane punkt za to zadanie? ');
        read(odp);
        if lowercase(odp)<>'tak' then 
        writeln('Oj, niedobrze');
    end;
    until
    lowercase(odp) = 'tak';
    writeln('Prawidlowa odpowiedz, Dziekuje');
readkey;
end.