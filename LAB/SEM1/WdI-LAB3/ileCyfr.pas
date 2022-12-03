(***************************************** 
 Program name: ileCyfr.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 7: Napisz program, ktory zlicza 
         cyfry wczytanej liczby.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program ileCyfr;
uses crt;
var n: longint; // n <-- liczba wielocyfrowa, i <-- ilosc cyfr
    i: integer;

begin
    // Wczytaj liczbe
    // 1233
    // 1) pierwszy obieg petli n = 1233 div 10 = 123    ; i = 1
    // 2) drugi obieg petli n = 123 div 10 = 12         ; i = 2
    // 3) trzeci obieg petli n = 12 div 10 = 1          ; i = 3
    // 4) czwarty obieg petli n = 1 div 10 = 0          ; i = 4
    write('Podaj liczbe: ');
    read(n);
    while n > 0 do
    begin
        n := n div 10;
        i := i + 1;
    end;
    Writeln('Jest to liczba ', i ,'-cyfrowa');
end.