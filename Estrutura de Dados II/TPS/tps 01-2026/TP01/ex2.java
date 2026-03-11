import java.util.*;

public class ex2{
    public static void main(String[] args){

        Random random = new Random;
        Scanner dado = new Scanner(System.in);

        String palavra;
        char letra1 = random.nextInt(26);
        char letra2 = random.nextInt(26);

        palavra = dado.nextLine();

        alteracao(palavra);

        System.out.println(alteracao);

    }

    public static void alteracao(String palavra,char letra1,char letra2){

        for(int i = 0; i < palavra.length;i++)
            if(palavra.charAt(i) == letra1)
                palavra.charAt(i) == letra2;
    }


}