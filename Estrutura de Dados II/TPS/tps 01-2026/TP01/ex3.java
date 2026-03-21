import java.util.*;

public class ex3{
    public static void main(String[] args){

        Scanner dado = new Scanner(System.in);

        String palavra;

        palavra = dado.nextLine();

        if(isVogal(palavra) == true)
            System.out.print("SIM ");
        else
            System.out.print("NAO ");
        if(isConsoante(palavra) == true)
            System.out.print("SIM ");
        else
            System.out.print("NAO ");
        if(isInteiro(palavra) == true)
            System.out.print("SIM ");
        else
            System.out.print("NAO ");
        if(isReal(palavra) == true)
            System.out.print("SIM ");
        else
            System.out.print("NAO ");
    
    }

    public static boolean isVogal(String palavra){
        
        //loop principal, verifica vogal
        for(int i = 0; i < palavra.length();i++)
            if(palavra.charAt(i) != 'a' ||palavra.charAt(i) != 'A' ||palavra.charAt(i) != 'e' ||palavra.charAt(i) != 'E' ||palavra.charAt(i) != 'i' ||palavra.charAt(i) != 'I' ||palavra.charAt(i) != 'o' ||palavra.charAt(i) != 'O' ||palavra.charAt(i) != 'u' ||palavra.charAt(i) != 'U')
                return false;

        return true;

    }

    public static boolean isConsoante(String palavra){

        for(int i = 0; i < palavra.length();i++)
             if(palavra.charAt(i) == 'a' ||palavra.charAt(i) == 'A' ||palavra.charAt(i) == 'e' ||palavra.charAt(i) == 'E' ||palavra.charAt(i) == 'i' ||palavra.charAt(i) == 'I' ||palavra.charAt(i) == 'o' ||palavra.charAt(i) == 'O' ||palavra.charAt(i) == 'u' ||palavra.charAt(i) == 'U')
                return false;

        return true;
    }

    public static boolean isInteiro(String palavra){

        //trata numero negativo
        if(palavra.charAt(0) == '-' || palavra.charAt(0) >= 48 && palavra.charAt(0) <= 57)
            //loop principal verifica inteiro
            for(int i = 1; i <= palavra.length();i++)
                if(palavra.charAt(i) < 48 || palavra.charAt(i) > 57)
                    return false;
        else
            return false;

        return true;

    }

    public static boolean isReal(String palavra){

        //trata negativo
        if(palavra.charAt(0) == '-' || palavra.charAt(0) >= 48 && palavra.charAt(0) <= 57)
        {
            int aux = 0;

            //loop principal verifica real
            for(int i = 1; i < palavra.length();i++)
            {
                if(palavra.charAt(i) < 48 || palavra.charAt(i) > 57)
                    return false;
                if(palavra.charAt(i) == '.' || palavra.charAt(i) == ',')
                    aux++;
            }

            if(aux > 1 && aux < 0)
                return false;
        }

        return true;

    }

}