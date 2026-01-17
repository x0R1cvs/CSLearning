PROGRAM ex0000000026;
USES CRT;
VAR x,y,media : real;
BEGIN
    readln(x);readln(y);
    media := (x+y) / 2;
    IF (x >= 7)
    THEN writeln('Aprovado')
    ELSE writeln('Reprovado');
END.