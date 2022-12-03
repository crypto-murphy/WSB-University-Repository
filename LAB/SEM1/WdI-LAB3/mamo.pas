(***************************************** 
 Program name: mamo.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 3: Napisz program, w ktorym syn zapyta trzy
         razy mame czy moze zagrac na komputerze.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program mamo;
var i: integer; // <-- zmienna sterujaca

begin

  for i := 9 downto 7 do //lub for i :='a' to 'z'
  begin 
    writeln('Mamo, moge zagrac na komputerze!');
    writeln(i);
  end;
end.