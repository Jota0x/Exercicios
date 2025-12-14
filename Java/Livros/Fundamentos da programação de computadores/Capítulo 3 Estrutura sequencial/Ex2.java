//Faça um programa que receba três notas, calcule e mostre a média aritmética.

import java.util.Scanner;

public class Ex2 {

    static public void main(String[] args) {
        Media();
    }

    // método para calculo da media
    static public void Media() {

        // variaveis
        float[] nota = new float[3];
        float media = 0;

        // cria objeto Scanner
        Scanner dado = new Scanner(System.in);

        System.out.println("Digite as 3 notas: ");

        // loop principal
        for (int i = 0; i < nota.length; i++) {
            nota[i] = dado.nextFloat();
            media += nota[i];
        }

        media = media / 3;

        System.out.printf("Media: %.2f ", media);

        dado.close();

    }

}
