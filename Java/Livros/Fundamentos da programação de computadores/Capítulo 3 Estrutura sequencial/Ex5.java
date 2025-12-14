/*aça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
o valor do aumento e o novo salário.*/

import java.util.Scanner;

public class Ex5 {

    static public void main(String[] args) {

        float salario;
        int percentual;

        Scanner dado = new Scanner(System.in);

        System.out.println("Digite salario e percentual:");

        salario = dado.nextFloat();
        percentual = dado.nextInt();

        System.out.printf("Novo Salario: %.2f", novoSalario(salario, percentual));

        dado.close();

    }

    static public float novoSalario(float salario, int percentual) {
        return salario + (salario * (percentual / 100));
    }

}
