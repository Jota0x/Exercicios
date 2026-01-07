/* Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre os números
primos e suas respectivas posições. */

import java.util.Random;

public class Ex1 {
    static public void main(String[] args) {
        // declara vetor de 9 posições
        int[] Vetor = new int[9];

        // cria objeto Random
        Random rand = new Random();

        // loop principal
        // preenche vetor com numeros aleatorio
        for (int i = 0; i < Vetor.length; i++)
            Vetor[i] = rand.nextInt(100);

        //verifica numero e posição no vetor 
        for (int i = 0; i < Vetor.length; i++) {
            if (Primo(Vetor[i]) == true)
                System.out.println(" Numero: " + Vetor[i] + " Posicao: " + i + " ");
        }

    }

    // verifica c é primo
    static public boolean Primo(int num) {
        {
            if (num <= 1) {
                return false;
            }
            for (int i = 2; i <= num / 2; i++) {
                if ((num % i) == 0)
                    return false;
            }
            return true;
        }

    }

}