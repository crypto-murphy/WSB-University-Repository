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
var wczytaneLiczby : array[0..1000] of integer;

begin
    wczytaneLiczby[2] := 5;
    wczytaneLiczby[1] := 5;
    readkey;
end.