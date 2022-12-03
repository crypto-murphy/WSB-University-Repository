(***************************************** 
 Program name: potegowanie.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 5: Napisz program, ktory wczyta podstawe potegi oraz 
         wykladnik, a nastepnie wyswietli wynik potegowania.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program potegowanie.pas;

var i, potega, x, y : Integer;
   
begin
 write('Podaj liczbe: ');
 readLn(y);

 write('Podaj potege: ');
 readln(potega);

 x := 1;
 for i:=1 to potega do
   x := x * y;

 WriteLn('Wynik potegowania: ', x);
 
end.