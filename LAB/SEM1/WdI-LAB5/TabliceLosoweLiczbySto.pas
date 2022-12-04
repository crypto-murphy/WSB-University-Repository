(***************************************** 
 Program name: TabliceLosoweLiczbySto.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Taski 3: Napisz program, ktory wypelni tablice losowymi liczbami mniejszymi
          niz 100 i skopiuje do drugiej tablicy wartosci wieksze od 50.
 Created: 2022-12-04
 Ver. 1.00 
 *****************************************)

program TabliceLosoweLiczbySto.pas;
uses crt;
var tab : array of integer; //I tablica dynamiczna;
    tab2 : array of integer; //II tablica dynamiczna;
  n, i, len : integer; // wielkość I tablicy
begin
  Writeln('Podaj ile elementów chcesz wprowadzić?');
  Readln(n);
  Setlength(tab,n);//Ustaw wielkość tablicy o nazwie "tab" na n, np. 10
  randomize; //informujemy, że będziemy wykonywać losowanie
  len := 1; // długość II tablicy;
  //Setlength(tab2,n);  
  for i := 1 to n do
  begin
    tab[i] := random(101);
    Writeln(tab[i]);
    if tab[i]>50 then
    begin
      Setlength(tab2,len+1);  //zwiększ wielkość tablicy 2 o 1
      tab2[len] := tab[i];
      len := len+1;
    end;  
  end;
  writeln;
  for i := 1 to Length(tab2)-1 do
    Writeln(tab2[i]);
  readkey;
end.