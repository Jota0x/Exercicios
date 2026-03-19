import java.util.*;

public class ex1{
    public static void main(String[] args){
        
    
        Scanner dado = new Scanner(System.in);
        
        String palavra;

        palavra = dado.nextLine();

        while(!palavra.equals("FIM"))
        {
            ciframento(palavra);
            
            palavra = dado.nextLine();
        }

    }


    public static void ciframento(String palavra){

        char[] novaPalavra = new char[palavra.length()];

        for(int i = 0; i < palavra.length();i++)
        {
            char letra = palavra.charAt(i);

            if(letra >= 0 && letra <= 126)
            {
                char novaLetra = (char)(letra + 3);
                novaPalavra[i] = novaLetra;
            }
            else    
                novaPalavra[i] = letra;

        }

        String newPalavra = new String(novaPalavra);

        System.out.println(newPalavra);

    }

}