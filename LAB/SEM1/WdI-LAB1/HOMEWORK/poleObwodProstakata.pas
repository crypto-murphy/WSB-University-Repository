{***************************************** 
 Program name: poleObwodProstakata.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-22
 Ver. 1.00 
 *****************************************}

program poleObwodProstakata;
var P, O, a, b: integer;

begin
    write('Wpisz dlugosc boku a: ');
    readln(a);
    write('Wpisz dlugosc boku b: ');
    readln(b);
    P:=a*b;
    O:=2*(a+b);
    writeln('Pole prostokata wynosi ',P,', a jego obwod jest rowny ', O,'.');
end.