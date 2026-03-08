import java.util.Scanner;

public class ex1 {

    public static void main(String[] args) {

        String palavra;

        Scanner dado = new Scanner(System.in);

        palavra = dado.nextLine();

        int maiusculo = 0;

        for (int i = 0; i < palavra.length(); i++) {
            if (palavra.charAt(i) >= 'A' && palavra.charAt(i) <= 'Z')
                maiusculo++;
        }

        System.out.println(maiusculo);

    }

}