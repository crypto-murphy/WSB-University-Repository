(***************************************** 
 Program name: sumaElementowTablicy.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 1: Napisz program wczytujacy do tablicy 10 liczb calkowitych. 
         Na koncu programu wypisuje sume wszystkich elementow tablicy.
 Created: 2022-12-04
 Ver. 1.00 
 *****************************************)

program sumaElementowTablicy;
uses crt;
var arr : array [0..9] of string;
    i, number : integer;
    n : string;
begin
  number := 1;
  for i := 0 to 9 do
    begin
        write('Wpisz imie ', number, ': ');
        readln(n);
        arr[i] := n;
        number := number +1;
    end;
    writeln(arr[i]);
    writeln;
    for i := 9 downto 0 do
        writeln(arr[i]);

  
end.