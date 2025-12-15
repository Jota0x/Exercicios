/*
 * Faça um programa que receba o salário base de um funcionário, calcule e
 * mostre o salário a receber,
 * sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e
 * paga imposto de 7% também sobre o salário base.
 */

import java.util.Scanner;

public class Ex6 {

    static public void main(String[] args) {

        float salario = 0;

        Scanner dado = new Scanner(System.in);

        System.out.println("Digite Salario: ");
        salario = dado.nextFloat();

        System.out.println("Salario a receber: " + (salario - imposto(salario) + gratificacao(salario)));

        dado.close();

    }

    // calcula salario
    static public float imposto(float salario) {
        return (salario * 0.07f);
    }

    // calcula gratificação
    static public float gratificacao(float salario) {
        return (salario * 0.05f);
    }

}