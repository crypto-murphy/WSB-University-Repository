(***************************************** 
 Program name: MaxMin2.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 14: Napisz program, ktory w jednym obiegu petli znajduje 
          indeks najwiekszego i najmniejszego elelentu tablicy.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program MaxMin2;
uses crt;
var tab : array[0..9] of integer;
  i : integer;
  max, min : integer;
  imax, imin : integer; // imax - indeks największego elementu, imin - indeks najmniejszego elementu
begin  
  randomize;
  for i := 0 to 9 do
  begin
    tab[i] := random(100);
    writeln(tab[i]);
  end;
  max := tab[0];
  min := tab[0];
  imax := 0;
  imin := 0;
  for i := 1 to 9 do
  begin
    if tab[i] > max then
    begin
      max := tab[i];
      imax := i;
    end;
    if tab[i] < min then
    begin
        min := tab[i];
        imin := i;
    end;
  end;
  Writeln('max=', max,', min =', min);
  Writeln('imax=', imax,',imin =', imin);
end.