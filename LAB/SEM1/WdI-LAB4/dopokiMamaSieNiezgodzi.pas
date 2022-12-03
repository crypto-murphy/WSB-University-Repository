(***************************************** 
 Program name: dopokiMamaSieNiezgodzi.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 8: Napisz program, w którym syn pyta mame 
         czy moze zagrac dopoki mama sie nie zgodzi.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program dopokiMamaSieNiezgodzi;
uses crt;
var odp: string;

begin
    repeat
    begin
    writeln('Moge zagrac na komputerze?');
    readln(odp);
    end;
    until
    (odp = 'tak') or (odp = 'TAK');
readkey;
end.