(***************************************** 
 Program name: tabliceZnakowe.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program tabliceZnakowe;
uses crt;
var znaki : array[0..9] of char;
  i : integer;
  
begin
  for i := 0 to 9 do
    read(znaki[i]);
  for i:=9 downto 0 do
    write(znaki[i]);
end.