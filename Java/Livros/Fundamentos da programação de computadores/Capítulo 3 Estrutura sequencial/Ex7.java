/*Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.*/

import java.util.Scanner;

public class Ex7 {

    static public void main(String[] args) {
        float salario;
        float gratificacao = 50;

        Scanner dado = new Scanner(System.in);

        System.out.println("Digite Salario: ");
        salario = dado.nextFloat();

        salario = salario + gratificacao - imposto(salario);

        System.out.println("Salario a receber: " + salario);

        dado.close();

    }

    static public float imposto(float salario) {
        return (salario * 0.10f);
    }

}
