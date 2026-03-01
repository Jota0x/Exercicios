import java.util.Scanner;

public class Ex1 {

    public static void main(String[] args) {

        String palavra;

        Scanner dado = new Scanner(System.in);

        palavra = dado.nextLine();

        Palindromo(palavra);

    }

    public static void Palindromo(String palavra) {

        boolean ehPalindromo = true;
        int letraFinal = palavra.length() - 1;

        for (int i = 0; i < palavra.length()/2; i++) {
            if (palavra.charAt(i) != palavra.charAt(letraFinal))
                ehPalindromo = false;
            letraFinal--;
        }

        if (!ehPalindromo)
            System.out.println("NAO");
        else
            System.out.println("SIM");

    }

}
