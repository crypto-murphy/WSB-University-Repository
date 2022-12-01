(***************************************** 
 Program name: readWrite.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-12-01
 Ver. 1.00 
 *****************************************)

program readWrite;
var stolica: string;
begin

    writeln('Podaj stolice Norwegii');
    readln (stolica);
    if stolica = 'Oslo' then writeln ('Brawo!!!')
    else writeln ('Zle!')
end.