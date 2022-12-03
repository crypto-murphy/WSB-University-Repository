(***************************************** 
 Program name: choinka.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 6: Napisz program, ktory wczyta znak i utworzy
         z niego trojkat prostokatny rownoramienny.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program choinka;
uses crt;
var i, j, n : integer;
  znak : char;
begin
//*  narysuj 1x* i przejdz do nowej linii
//** narysuj 2x* i przejdz do nowej linii
//*** narysuj 3x* i przejdz do nowej linii
//**** narysuj 4x* i przejdz do nowej linii
//***** narysuj 5x* i przejdz do nowej linii
  Writeln('Podaj znak: ');
  ReadLn(znak);
  Writeln('Podaj wymiar: ');
  ReadLn(n);
  clrscr;
  for i := 1 to n do //pion
  begin
    for j := 1 to i do //poziom
    begin
      Write(znak);
    end;
    writeln;
  end;
  readkey;
end.