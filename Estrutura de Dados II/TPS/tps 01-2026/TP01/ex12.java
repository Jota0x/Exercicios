import java.util.*;

public class ex12 {
    public static void main(String[] args) {

        Scanner dado = new Scanner(System.in);

        String palavra;

        palavra = dado.nextLine();

        while (!palavra.equals("FIM")) {

            System.out.println(soma(palavra, palavra.length() - 1));

            palavra = dado.nextLine();

        }

    }

    public static int soma(String palavra, int tam) {

        if (tam < 0)
            return 0;

        int numero = (int) palavra.charAt(tam) - 48;

        return numero + soma(palavra, tam - 1);

    }

}