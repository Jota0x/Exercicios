import java.util.Scanner;


//logica aparentemente correta, porém Scanner precisa ser mudado para MyIO
public class palindromo {

    public static void main(String[] args) {

        String palavra;

        Scanner dado = new Scanner(System.in);

        palavra = dado.nextLine();

        while (!palavra.equals("FIM")) {
            if (ehPalindromo(palavra) == false)
                System.out.println("NAO");
            else
                System.out.println("SIM");

            palavra = dado.nextLine();

        }

        System.out.println(palavra);
        dado.close();

    }

    public static boolean ehPalindromo(String palavra) {
        boolean palindromo = true;

        int finalPalavra = palavra.length() - 1;

        for (int i = 0; i < palavra.length(); i++) {

            if (palavra.charAt(i) != palavra.charAt(finalPalavra - i))
                palindromo = false;

        }

        return palindromo;

    }

}