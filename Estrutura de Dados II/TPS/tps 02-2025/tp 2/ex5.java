import java.util.*;


// ========================================================= //

public class ex5{
    public static void main(String[] args){

        Scanner dado = new Scanner(Syetem.in);

        String palavra1,palavra2;

        palavra1 = dado.nextLine();
        palavra2 = dado.nextLine();

        System.out.println(isAnagrama(palavra1,palavra2));

    }

// ========================================================= //

    public static boolean isAnagrama(String palavra1, String palavra2){

        char chars1 = toCharArray(palavra1);
        char chars2 = toCharArray(palavra2);

        Arrays.sort(palavra1);
        Arrays.sort(palavra2);

        return Arrays.equals(palavra1,palavra2);

    }

}

