import java.util.*;

public class ex2{
    public static void main(String[] args){

        Random random = new Random();
        Scanner dado = new Scanner(System.in);

        String palavra;
        char letra1 = (char) ('a' + random.nextInt(26));
        char letra2 = (char) ('a' + random.nextInt(26));

        palavra = dado.nextLine();

        alteracao(palavra, letra1, letra2);

        System.out.println(palavra);

    }

    public static String alteracao(String palavra,char letra1,char letra2){

        for(int i = 0; i < palavra.length();i++)
            if(palavra.charAt(i) == letra1)
                palavra = palavra.substring(0, i) + letra2 + palavra.substring(i + 1);
        return palavra;
    }


}