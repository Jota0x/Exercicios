import java.util.*;

public class ex11{
    public static void main(String[] args){

        Scanner dado = new Scanner(System.in);

        String palavra;

        palavra = dado.nextLine();

        inverte(palavra,palavra.length() - 1);


    }

    public static void inverte(String palavra,int tam)
    {
        if(tam < 0)
            return;
        else
            System.out.print(palavra.charAt(tam));
        inverte(palavra,tam - 1);

    }


}

