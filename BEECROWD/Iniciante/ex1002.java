
import java.util.Scanner;

public class ex1002 {

    public static void main(String[] args) {

        double area, PI = 3.14159, raio;

        Scanner dado = new Scanner(System.in);

        raio = dado.nextDouble();

        area = (raio * raio) * PI;

        System.out.printf("A=%.4f\n", area);

    }

}
