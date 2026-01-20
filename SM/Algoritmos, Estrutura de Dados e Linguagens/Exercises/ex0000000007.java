import java.util.*;

public class ex0000000007{
    public static void main(String args[]){
        double peso,pesogordo,pesomagro;
        Scanner x1;
        x1 = new Scanner(System.in);
        peso = x1.nextDouble();
        pesogordo = peso * 1.15;
        pesomagro = peso - (peso*0.2);
        System.out.println(pesogordo);
        System.out.println(pesomagro);
    }
}