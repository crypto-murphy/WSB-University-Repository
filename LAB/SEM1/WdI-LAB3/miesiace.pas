(***************************************** 
 Program name: miesiace.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 1: Napisz program, ktory wczytuje numer miesiaca i wypisuje jego nazwe
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program miesiace;

var m: integer;

begin
read(m);
case m of
    1: Write('styczen');
    2: Write('luty');
    3: Write('marzec');
    4: Write('kwiecien');
    5: Write('maj');
    6: Write('czerwiec');
    7: Write('lipiec');
    8: Write('sierpien');
    9: Write('wrzesien');
    10: Write('pazdziernik');
    11: Write('listopad');
    12: Write('grudzien');
else
    write('Nie ma takiego miesiaca');
    end;
end.