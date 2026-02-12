
import java.util.Scanner;

public class ex1001 {

    public static void main(String[] args) {

        int x, y;
        int soma;

        Scanner dado = new Scanner(System.in);

        x = dado.nextInt();
        y = dado.nextInt();

        soma = x + y;

        System.out.println(" X = " + soma);
        dado.close();

    }

}
