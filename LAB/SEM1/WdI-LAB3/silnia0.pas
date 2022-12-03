(***************************************** 
 Program name: silnia0.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 4: Napisz program, ktory obliczy silnie wczytanej liczby naturalnej.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program silnia0;
var n, s, i: integer; // <-- n to jest liczba naturalna, i <-- zmienna sterujaca, s <-- silnia

begin

    writeln('Podaj liczbe naturalna: ');
    readln(n);
    // 1! = 1
    // 2! = 1*2 (inaczej 1!*2)
    // 3! = 1*2*3 (to samo co 2!*3)
    // 4! = 1*2*3*4 (to samo co 3!*4)
    s :=1; // domyslne dla mnożenia - element neutralny startowy
    for i:= 1 to n do
        s := s * i;  
    writeln(n,'!=',s);
end.