(***************************************** 
 Program name: tabliceCoTrzeciElement.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: Mamy tablice A o N elementach (dowolnego typu). Zbuduj 
         tablice B zawierajaca co trzeci element tablicy A.
 Created: 2022-12-04
 Ver. 1.00 
 *****************************************)

program tabliceCoTrzeciElement;
uses crt;
var a : array of integer;
    b : array of integer;
    n, i : integer; // Wielkość tablicy
begin
  writeln('Podaj wielkosc tablicy');
  Readln(n);
  Setlength(a,n);// ustaw wielkość I tablicy
  Setlength(b,n div 3 + 1); // ustaw wielkość II tablicy
  randomize;  
  for i := 1 to n do // wypełniamy I tablicę losowymi wartościami
    a[i] := random(30);
  for i := 1 to n do
  begin
    if (i mod 3 = 0) and (i >3) then
      b[i div 3] := a[i];
    writeln(a[i]);
  end;
  Writeln('Co trzeci element tablicy:');
  for i := low(b) to high(b) do //low(b) - najniższy index tablicy b, high(b) - największy indeks tablicy b
    Writeln('b[',i,']=',b[i]);
    Writeln('Length(b)=', Length(b)); // length(b) - ilość elementów tablicy b
  readkey;
end.