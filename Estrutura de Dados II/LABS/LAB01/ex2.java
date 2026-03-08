import java.util.*;

public class ex2 {
    public static void main(String[] args) {

        String palavra;

        Scanner dado = new Scanner(System.in);
        palavra = dado.nextLine();

        System.out.println(Maiusculo(palavra, palavra.length() - 1));

    }

    // método recursivo
    public static int Maiusculo(String palavra, int tam) {
        int aux;

        // método de parada
        if (tam < 0)
            return 0;

        if (palavra.charAt(tam) >= 'A' && palavra.charAt(tam) <= 'Z')
            aux = 1;
        else
            aux = 0;

        return aux + Maiusculo(palavra, tam - 1);

    }
}
