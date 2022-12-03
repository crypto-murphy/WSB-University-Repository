(***************************************** 
 Program name: mamo_v2.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 3: Napisz program, w ktorym syn zapyta trzy
         razy mame czy moze zagrac na komputerze.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program mamo_v2;
var i, n: integer; // <-- zmienna sterujaca

begin
  // downto i:=i-1
  //to i:=i+1
  n := 3;
  for i := 0 to n-1 do // <-- domyslny sposob iteracji
  begin 
    writeln('Mamo, moge zagrac na komputerze!');
  end;
end.