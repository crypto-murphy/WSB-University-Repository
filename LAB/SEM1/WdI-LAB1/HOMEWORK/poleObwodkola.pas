(***************************************** 
 Program name: poleObwodKola.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-23
 Ver. 1.00 
 *****************************************)

program poleObwodKola;
var P, O, r, pi: real;

begin
    write('Wpisz promien kola: ');
    readln(r);
    pi:=3.14;
    P:=pi*sqr(r);
    O:=2*pi*r;
    writeln('Pole kola wynosi: ',P:4:2,', a jego obwod jest rowny ',O:4:2,'.');
end.