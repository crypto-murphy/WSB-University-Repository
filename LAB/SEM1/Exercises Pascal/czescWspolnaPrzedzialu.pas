(***************************************** 
 Program name: czescWspolnaPrzedzialu.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task: Na wejściu mam liczby a, b, c, d oraz x. Napisz algorytm (program), 
       który na wyjściu poda odpowiedź na pytanie czy x należy do części 
       wspólnej przedziałów [a,b] i [c,d]
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program czescWspolnaPrzedzialu;
var a,b,c,d,x:double;
begin
  write('Podaj liczbe: ');
  readln(x);
  write('Podaj poczatek przedzialu pierwszego: ');
  readln(a);
  write('Podaj koniec przedzialu pierwszego: ');
  readln(b);
  write('Podaj poczatek przedzialu drugiego: ');
  readln(c);
  write('Podaj koniec przedzialu drugiego: ');
  readln(d);
  writeln('Czesc wspolna przedzialow: ',c:3:0,b:3:0);
  If ((x>a) and (x<b)) or ((x>c) and (x<d)) then
  writeln('Liczba nie nalezy do czesci wspolnej przedzialow.') else
  writeln('Liczba nalezy do czesci wspolnej przedzialow.');
 end.