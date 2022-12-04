(***************************************** 
 Program name: tablicaSilnia.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 2: Napisz program, ktory wypełni 
         tablice kolejnymi wartosciami silni.
 Created: 2022-12-04
 Ver. 1.00 
 *****************************************)

program tablicaSilnia;
uses crt;
var silnia : array of longint; //deklaracja tablicy dynamicznej
  n, i, ile : integer;
begin
  //0! = 1
  //1!= 1
  //2! = 1*2
  //3! = 1*2*3
  Writeln('Podaj gorna granice silni:');
  Readln(n);//ilość elemenów tablicy
  Setlength(silnia,n+1); //ustawiamy wilekość tablicy dynamicznej
  
  for i:=0 to n do
  begin
    if (i = 0) or (i = 1) then
      silnia[i] := 1
    else
      silnia[i] := silnia[i-1] * i;
  end;
  Writeln('Podaj liczbe, ktorej silnie chcesz obliczyc (nie wiecej niz ',n,'): ');
  Readln(ile);
  Writeln(ile,'!=',silnia[ile]);

  end.