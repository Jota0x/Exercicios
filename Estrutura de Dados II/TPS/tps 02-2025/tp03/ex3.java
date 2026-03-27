import java.util.*;


public class ex3{
    public static void main(String[] args){

        int n;

        Scanner dado = dado.nextInt();

        System.out.println(Soma(n));

    }

    public static int Soma(int n){
        if(n == 0)
            return 0;
        else
            return (n % 10) + Soma(int n/10);
    }

}
