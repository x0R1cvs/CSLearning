import java.util.*;

public class ex0000000006{
    public static void main(String args[]){
        double salario,vendas,comissao,salariofinal;
        Scanner x1,x2;
        x1 = new Scanner(System.in);
        salario = x1.nextDouble();
        x2 = new Scanner(System.in);
        vendas = x2.nextDouble();
        comissao = vendas * 0.04;
        salariofinal = comissao + salario;
        System.out.println(comissao);
        System.out.println(salariofinal);
    }
}