(***************************************** 
 Program name: zliczanieLiczbNaturalnych.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Task 2: napisz program, ktory wczyta liczbe, a nastepnie
         wyswietli 5 kolejnych liczb naturalnych.
 Created: 2022-12-03
 Ver. 1.00 
 *****************************************)

program zliczanieLiczbNaturalnych;
var n: integer;
    i: integer; // i <-- zmnienna sterujaca

begin

    write('Wczytaj liczbe naturalna: ');
    readln(n);
    writeln('kolejne liczby naturalne to: ');
    for i := 1 to 20 do 
    begin
        writeln(n+i);
    end;
    //clrscr;
    //Writeln(n+1); <-- alternatywa wersja zadania
    //Writeln(n+2);     ktora moze byc zastapiona
    //Writeln(n+3);     instrukcja for powyzej.
    //Writeln(n+4);
    //Writeln(n+5);
    
end.