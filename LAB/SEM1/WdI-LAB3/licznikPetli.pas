(***************************************** 
 Program name: licznikPetli.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 7: Napisz program, w ktorym dopoki nie zostanie wyswietlony
         klawisz wyswietlane zostanie licznik petli.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program licznikPetli;
uses crt;
var i: integer; // i <-- licznik petli 

begin
    i :=1;
    while not keypressed do
    begin
    writeln(i);
        i := i + 1;
    end;
    readkey;
end.