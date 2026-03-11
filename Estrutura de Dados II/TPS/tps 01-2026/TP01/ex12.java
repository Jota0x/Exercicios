import java.util.*;

public class ex12{
    public static void main(String[] args){

        Scanner dado = new Scanner(System.in);

        int n;

        n = dado.nextInt();

        System.out.println(soma(n));

    }

    public static int soma(int n)
    {
        if(n == 0)
            return 0;
        else
            return n % 10 + soma(n/10);

    }


}