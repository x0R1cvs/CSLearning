PROGRAM ex0000000007;
USES CRT;
VAR peso,pesogordo,pesomagro : real;
BEGIN
    readln(peso);
    pesogordo := peso * 1.15;
    pesomagro := peso - (peso*0.2);
    writeln(pesogordo:3:3);
    writeln(pesomagro:3:3);
END.