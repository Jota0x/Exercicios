//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

import java.util.Scanner;

public class Ex3 {

    static public void main(String[] args) {
        Media();
    }

    static public void Media() {
        // variaveis
        float[] notas = new float[3];
        int[] pesos = new int[3];
        float media = 0;

        // criação objeto Scanner
        Scanner dado = new Scanner(System.in);

        System.out.println("Digite a nota e o peso: ");

        for (int i = 0; i < notas.length; i++) {

            System.out.println("Nota: ");
            notas[i] = dado.nextFloat();
            System.out.println("Peso: ");
            pesos[i] = dado.nextInt();
        }

        media = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / (pesos[0] + pesos[1] + pesos[2]);

        System.out.printf("Media Ponderada: %.2f", media);

        dado.close();

    }

}
