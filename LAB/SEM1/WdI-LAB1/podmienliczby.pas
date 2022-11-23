{***************************************** 
 Program name: myname.pas 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-19
 Ver. 1.00 
 *****************************************}

program nowy;
var x, y, z: integer;

begin
    writeln ('Type x: ');
    readln(x);
    writeln ('Type y: ');
    readln(y);
    z:=x;
    x:=y;
    y:=z;
    
    writeln('x=',x, ', y=' ,y, '.');
    
end.