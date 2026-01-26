// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
// que este sofreu um desconto de 10%.

import java.util.*;

public class x0000000005{
    public static void main(String args[]){
        double precoproduto,novopreco;
        Scanner x1;
        x1 = new Scanner(System.in); precoproduto = x1.nextDouble();
        novopreco = precoproduto * 0.9;
        System.out.println(novopreco);
    }
}