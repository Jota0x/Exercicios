/*
Palındromo - Crie um m´etodo iterativo que recebe uma string como parˆametro e retorna
true se essa ´e um “Pal´ındromo”. Na sa´ıda padr˜ao, para cada linha de entrada, escreva uma linha
de sa´ıda com SIM/N ˜AO indicando se a linha ´e um pal´ındromo. Destaca-se que uma linha de
entrada pode ter caracteres n˜ao letras.
 */

public class Ex1 {

    public static void main(String[] args) {

        String palavra = "ovo";
        System.out.println(Palindromo(palavra));

    }

    public static boolean Palindromo(String palavra) {

        int finalIdx = palavra.length() - 1;

        for (int i = 0; i < palavra.length() / 2; i++) {
            if (palavra.charAt(i) != palavra.charAt(finalIdx))
                return false;

            finalIdx--;
        }

        return true;

    }

}