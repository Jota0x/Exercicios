
import java.util.Scanner;

public class teste2006 {

    public static void main(String[] args) {

        int opcao = 0, aux = 0;
        int[] resposta = new int[5];

        Scanner dado = new Scanner(System.in);

        for (int i = 0; i < resposta.length; i++) {

            resposta[i] = dado.nextInt();

        }

        for (int i = 0; i < resposta.length; i++) {

            if (resposta[i] == opcao) {
                aux++;
            }
        }

        System.out.println(aux);
        dado.close();
    }

}
