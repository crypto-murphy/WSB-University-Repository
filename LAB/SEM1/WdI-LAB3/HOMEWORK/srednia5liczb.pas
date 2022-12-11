(***************************************** 
 Program name: srednia5liczb.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 1: Napisz program, który wczyta 5 liczb, 
         a następnie wyświetli ich średnią.
 Created: 2022-12-04
 Ver. 1.00 
 *****************************************)

program srednia5liczb;
uses crt;
var i, liczba, suma : integer;

begin

    for i := 1 to 5 do
    begin
        write('Podaj ',i, ' liczbe: ');
          readln (liczba);
          suma := suma + liczba;     
    end;
    writeln('Srednia z ',suma, ' wynosi = ', suma/i:2:2);
    readkey;
end.