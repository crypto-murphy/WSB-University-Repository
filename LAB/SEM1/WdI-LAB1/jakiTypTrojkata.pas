(***************************************** 
 Program name: jakiTypTrojkata.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-12-01
 Ver. 1.00 
 *****************************************)

program jakiTypTrojkata;
var a, b, c : integer;
begin
    // or -> lub
    // and -> i
    // not
    write ('Podaj dlugosci bokow: ');
    read(a, b, c);
    if (a = b) and (a = c)
    then writeln ('Trojkat jest rownoboczny')
    else if (a=b) or (a=c) or (c=b)
    then writeln ('Trojkat jest rownoramienny')
    else writeln ('Zwykly trojkat')
end.