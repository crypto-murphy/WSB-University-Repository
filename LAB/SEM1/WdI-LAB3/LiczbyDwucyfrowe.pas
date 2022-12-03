(***************************************** 
 Program name: LiczbyDwucyfrowe.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 6: 
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program LiczbyDwucyfrowe;
uses crt;
var i, n : integer;
begin
  i := 10;
  Write('Podaj liczbe: ');
  Read(n);
  while i < n do
  begin
    Writeln(i);
    i := i + 1;
  end;
  readkey;
end.