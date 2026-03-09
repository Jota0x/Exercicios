import java.util.*;

public class ex3{

// ========================================================= //
    
    public static void main(String[] args){
        
        Scanner dado = new Scanner(System.in);

        String palavra;

        palavra = dado.nextLine();

        Inverte(palavra);

    }
    
// ========================================================= //


    public static void Inverte(String palavra){

        char[] chars = toCharArray(palavra);
        int i = 0,j = chars.lenth - 1;

        //realiza troca
        while (j > i) {

        char temp = chars[i];
        chars[i] = chars[j];
        chars[j] = temp;
        
        i++;
        j--;
    }

        String newPalavra = new String(chars);
        System.out.println(newPalavra);
    }

}