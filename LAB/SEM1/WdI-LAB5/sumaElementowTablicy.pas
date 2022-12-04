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
var tab : array [1..10] of Integer;
var s, i : integer; // s - suma
begin
  s := 0; // s=0 - zinicjalizowanie wartości startowej
  for i := 1 to 10 do
  begin
    Readln(tab[i]);
    s := s+tab[i];
  end;
  Writeln('Suma wczytanych liczb to ', s);
  readkey;
end.