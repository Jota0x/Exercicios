import java.util.Scanner;

public class Ex3 {
    public static void main(String[] args) {
        String palavra;

        Scanner dado = new Scanner(System.in);

        palavra = dado.nextLine();

        System.out.println(ciframento(palavra));

    }

    public static String ciframento(String palavra) {

        // transforma String em array de char
        char[] character = palavra.toCharArray();

        // desloca characters
        for (int i = 0; i < palavra.length(); i++) {

            character[i] = (char) (character[i] + 3);
        }

        // transforma array em String
        String ciframento = new String(character);

        return ciframento;

    }

}
