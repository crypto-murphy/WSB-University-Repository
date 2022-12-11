(***************************************** 
 Program name: zadanie1.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-12-10
 Ver. 1.00 
 *****************************************)
program zadanie1;
uses crt;
const
Max = 5;

var
tab_z:array[1..max] of char;
tab_l:array[1..max] of integer;
zgodne,przedzial,i, podzielne:integer;
a,b,x:integer;
n:char;


begin
Randomize;
zgodne:=0;
przedzial:=0;
podzielne:=0;
  for i:=1 to max do
  begin
    tab_z[i]:=Chr(random(SUCC(90-65))+65);
    writeln(tab_z[i]); // pokaz co losuje
  end;
  
  for i:=1 to max do
  begin
    if tab_z[i] = 'Z' then zgodne:=zgodne+1;
  end;

  writeln('Znak Z wystepuje ', zgodne , ' razy.');
  writeln;

end.
