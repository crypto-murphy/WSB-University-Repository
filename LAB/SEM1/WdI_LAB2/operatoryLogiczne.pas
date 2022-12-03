(***************************************** 
 Program name: operatoryLogiczne.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-12-01
 Ver. 1.00 
 *****************************************)

program operatoryLogiczne;
var a : char;
begin
    // or -> lub
    // and -> i
    // not
    
    read(a);
    if (a = 'a') or (a = 'e') or (a = 'i') or (a = 'o') or (a = 'u') or (a = 'y')
    then writeln ('samogloska')
    else writeln ('spolgloska');
end.