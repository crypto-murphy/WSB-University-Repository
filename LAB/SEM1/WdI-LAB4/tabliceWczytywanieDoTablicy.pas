(***************************************** 
 Program name: tabliceWczytywanieDoTablicy.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 11: Napiszmy program, ktory wczytuje ciag liczb (najpierw ilosc liczb, 
          a potem te liczby - zakladamy, ze ilosc wyrazow ciagu nie przekroczy
          1000) i wypisuje go w odwrotnej kolejnosci (od ostatniego wyrazu do pierwszego)
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program tabliceWczytywanieDoTablicy;
uses crt;
var wczytaneLiczby : array [0..1000] of integer;
  n, i : integer;
begin
  writeln('Podaj ilosc elementow do wczytania: ');
  readln(n);
  for i := 0 to n - 1 do
  begin
    Write('Podaj liczbe: ');
    Readln(wczytaneliczby[i]);
  end;
  clrscr;
  for i := n-1 downto 0 do
    Writeln('wczytaneLiczby[',i,']=',wczytaneliczby[i]);
end.