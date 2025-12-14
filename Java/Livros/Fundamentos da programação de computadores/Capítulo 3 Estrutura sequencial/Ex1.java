
//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
import java.util.Scanner;

public class Ex1 {
    public static void main(String args[]) {

        soma();
    }

    public static void soma() {

        // variaveis
        int[] N = new int[4];
        int soma = 0;

        // Objeto scarner
        Scanner dado = new Scanner(System.in);

        System.out.println("Digite 4 números inteiros: ");

        // loop principal
        for (int i = 0; i < N.length; i++) {
            N[i] = dado.nextInt();
            soma += N[i];
        }

        System.out.println("Soma: " + soma);

        dado.close();

    }

}
