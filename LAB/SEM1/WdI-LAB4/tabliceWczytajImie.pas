(***************************************** 
 Program name: tabliceWczytajImie.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 14: Podaj imie i wczytaj je z tablicy.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program tabliceWczytajImie;
uses crt;
var imiona : array [0..4] of string;
    i, idx : integer;
    imie : string;
begin
  imiona[0] := 'Anna';
  imiona[1] := 'Alicja';
  imiona[2] := 'Agata';
  imiona[3] := 'Aga';
  imiona[4] := 'Albert';
  writeln('Podaj imię:');
  Readln(imie);
  idx := -1;
  for i := 0 to 4 do
  begin
    Writeln(imiona[i],' ',imie);    
    if imiona[i] = imie then
    begin
        idx := i;
        break;
    end;
  end;
  if idx > 0 then
    Writeln(imie, ' jest na pozycji ',idx);
end.