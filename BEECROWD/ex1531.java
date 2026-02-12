
import java.util.Scanner;

public class ex1531 {

    public static void main(String[] args) {
        int N, M;

        Scanner dado = new Scanner(System.in);

        N = dado.nextInt();
        M = dado.nextInt();

        int resp1, resp2, Final;

        resp1 = fibonacci(N);
        resp2 = fibonacci(resp1);

        Final = resp2 % M;

        System.out.println(Final);

    }

    public static int fibonacci(int n) {

        if (n == 1 || n == 2) {
            return 1;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }

}
