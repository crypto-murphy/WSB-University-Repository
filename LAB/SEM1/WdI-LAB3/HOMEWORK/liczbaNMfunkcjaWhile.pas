(***************************************** 
 Program name: liczbaNMfunkcjaWhile.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 2b:Napisz program, który mając na wejściu dwie liczby naturalne
         n i m> policzy sumę kolejnych liczb naturalnych od m do n.
         Użyj pętli WHILE.
 Created: 2022-12-04
 Ver. 1.00 
 *****************************************)

program liczbaNMfunkcjaWhile;
uses crt;
var i, n, m, warunek, suma : integer;

begin
    suma:=0;
    write('Podaj liczbe n: '); readln(n);
    write('Podaj liczbe m: '); readln(m);
  
  if n > m then
    begin
        warunek:=n;
        n:=m;
        m:=warunek;
    end;
    
  while n <= m do
	begin
		suma:=suma+n;
		n:=n+1;
	end;
    write('Suma kolejnych liczb naturalnych od m do n to: ' ,suma);
    readkey;
end.
