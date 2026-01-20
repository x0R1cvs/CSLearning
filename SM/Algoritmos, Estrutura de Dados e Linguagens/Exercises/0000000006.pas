PROGRAM ex0000000006;
USES CRT;
VAR salario,vendas,comissao,salariototal : real;
BEGIN
    readln(salario);readln(vendas);
    comissao := vendas * 0.04;
    salariototal := comissao + salario;
    writeln(comissao:2:2);
    writeln(salariototal:2:2);
END.