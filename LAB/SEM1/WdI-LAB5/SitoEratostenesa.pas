(***************************************** 
 Program name: SitoEratostenesa.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 6: Napisz program, ktory bedzie realizowal sito Eratostenesa
 Created: 2022-12-04
 Ver. 1.00 
 *****************************************)

program SitoEratostenesa.pas;
uses crt;
var liczba,n:longInt;
    sito: array of byte;
    max : longint;
begin
  clrScr;
  Write('Podaj górną granicę sita: ');
  Readln(max);
  Setlength(sito,max);
  for n:=1 to max do //zakładamy, że wszystkie liczy są liczbami pierwszymi
    sito[n]:=0;
  for liczba:=2 to round(sqrt(max)) do // ustawiamy flagę 1 dla wszystkich liczb, które są wielkrtotością liczba
    if sito[liczba]=0 then
        for n:=2 to max div liczba do
        sito[liczba*n]:=1;
  for n:=2 to max do
    if sito[n]=0 then
      write(n,'  ');
  readLn;
end.