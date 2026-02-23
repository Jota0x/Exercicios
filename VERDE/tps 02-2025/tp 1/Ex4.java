
import java.util.Random;
import java.util.Scanner;

public class Ex4 {

    public static void main(String[] args) {

        String palavra;
        Random random = new Random();
        char letra1 = (char) ('a' + random.nextInt(26));
        char letra2 = (char) ('a' + random.nextInt(26));

        while (letra1 == letra2)
            letra2 = (char) ('a' + random.nextInt(26));

        Scanner dado = new Scanner(System.in);

        palavra = dado.nextLine().toLowerCase();

        // transforma String e array
        char[] troca = palavra.toCharArray();

        // troca letra1 por letra2
        for (int i = 0; i < palavra.length(); i++) {
            if (troca[i] == letra1)
                troca[i] = letra2;

        }

        String palavraNova = new String(troca);

        System.out.println("" + letra1 + " " + letra2 + "");

        System.out.println(palavraNova);

    }

}
