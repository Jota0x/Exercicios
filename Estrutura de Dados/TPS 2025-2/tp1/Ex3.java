/*
Ciframento de C´esar - O Imperador J´ulio C´esar foi um dos principais nomes do Imp´erio
Romano. Entre suas contribui¸c˜oes, temos um algoritmo de criptografia chamado “Ciframento de
C´esar”. Segundo os historiadores, C´esar utilizava esse algoritmo para criptografar as mensagens
que enviava aos seus generais durante as batalhas. A ideia b´asica ´e um simples deslocamento
de caracteres. Assim, por exemplo, se a chave utilizada para criptografar as mensagens for 3,
todas as ocorrˆencias do caractere ’a’ s˜ao substitu´ıdas pelo caractere ’d’, as do ’b’ por ’e’, e assim
sucessivamente. Crie um m´etodo iterativo que recebe uma string como parˆametro e retorna
outra contendo a entrada de forma cifrada. Neste exerc´ıcio, suponha a chave de ciframento trˆes.
Na sa´ıda padr˜ao, para cada linha de entrada, escreva uma linha com a mensagem criptografada.

*/

public class Ex3 {

    public static void main(String[] args) {

        String palavra = "bbb";

        Cifra(palavra);

    }

    // método para ciframento
    public static void Cifra(String palavra) {

        // cria vetor de caracteres do mesmo tamanho da palavra recebida
        char[] cifra = new char[palavra.length()];

        // loop principal
        // realiza o ciframento da palavra
        for (int i = 0; i < palavra.length(); i++) {
            // soma +3 ao valor numerico (ASCII)
            cifra[i] = (char) (palavra.charAt(i) + 3);
        }

        // imprime a nova palavra
        System.out.println(new String(cifra));

    }

}
