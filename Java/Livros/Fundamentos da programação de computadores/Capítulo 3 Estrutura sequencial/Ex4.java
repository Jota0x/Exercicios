/*Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%.*/

import java.util.Scanner;

public class Ex4 {

    static public void main(String[] args) {

        float salario;

        Scanner dado = new Scanner(System.in);

        System.out.println("Digite o salario: ");
        salario = dado.nextFloat();

        System.out.printf("Novo Salario: %.2f", novoSalario(salario));
        dado.close();

    }

    static public float novoSalario(float salario) {

        return salario + (salario * 0.25f);
    }

}
