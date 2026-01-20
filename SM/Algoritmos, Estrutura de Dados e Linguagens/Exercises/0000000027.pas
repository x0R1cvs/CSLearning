PROGRAM ex0000000027;
USES CRT;
VAR x,y,media : Real;
BEGIN
    CLRSCR;
    readln(x);readln(y);
    media := (x+y) / 2;
    IF (media >= 0.0) AND (media < 3.0) THEN 
        writeln('Reprovado')
    ELSE IF (media >= 3.0) AND (media < 7.0) THEN 
        writeln('Exame')
    ELSE
        writeln('Aprovado');
END.