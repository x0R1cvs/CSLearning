PROGRAM ex0000000004;
USES CRT;
VAR x,y,z : real;
BEGIN
    readln(x);readln(y);
    z := (x*2 + y*3) / (2+3);
    writeln(z);
END.