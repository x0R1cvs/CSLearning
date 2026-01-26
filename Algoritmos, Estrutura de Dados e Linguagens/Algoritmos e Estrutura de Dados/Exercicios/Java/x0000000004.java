// Livro: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
// derando peso 2 para a primeira e peso 3 para a segunda.

import java.util.*;

public class x0000000004{
    public static void main(String args[]){
        float nota1,nota2,media;
        Scanner x1,x2;
        x1 = new Scanner(System.in); nota1 = x1.nextFloat();
        x2 = new Scanner(System.in); nota2 = x2.nextFloat();
        media = (nota1 * 2 + nota2 * 3) / (2+3);
        System.out.println(media);
    }
}