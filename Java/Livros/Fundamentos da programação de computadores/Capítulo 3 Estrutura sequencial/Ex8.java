/*
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.
 */

import java.util.Scanner;

public class Ex8 {

    static public void main(String[] args) {
        float deposito;
        float rendimento = 0;
        int taxaJuros;

        Scanner dado = new Scanner(System.in);

        System.out.println("Digite o valor do Deposito e a taxa de Juros: ");

        deposito = dado.nextFloat();
        taxaJuros = dado.nextInt();

        rendimento = deposito * (taxaJuros / 100);

        deposito += rendimento;

        System.out.println("Valor do rendimento " + rendimento + " Valor total " + deposito);

        dado.close();

    }

}
