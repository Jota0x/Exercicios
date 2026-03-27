import java.util.*;

public class ex2{
    
    public static void main(String[] args){

        //cria tipo scanner para leitura 
        Scanner dado = new Scanner(System.in);

        String palavra;

        palavra = dado.nextLine();

        char[] chars = palavra.toCharArray();

        Inverte(chars,chars.lenth - 1);

    }

    public static void Inverte(char palavra[],int tam)
    {
        if(tam <  0)
            return;
        else
            System.out.println(palavra[tam]);
        Inverte(palavra,tam - 1);
    }


}