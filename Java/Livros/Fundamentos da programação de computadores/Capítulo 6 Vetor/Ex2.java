import java.util.Scanner;

public class Ex2 {
    static public void main(String[] args) {

        // declara vetor
        int[] quantidade = new int[10];
        float[] preco = new float[10];

        // cria objeto scanner
        Scanner dado = new Scanner(System.in);

        // leitura preco e quantidade
        for (int i = 0; i < preco.length; i++) {

            quantidade[i] = dado.nextInt();
            preco[i] = dado.nextFloat();

        }

        float salario = 545;

        // Relatório e preco da comissao
        for (int i = 0; i < preco.length; i++) {

            System.out.println("Preco Unitario " + preco[i] + " Quantidade: " + quantidade[i] + " Valor Total: "
                    + (preco[i] * quantidade[i]));
            System.out.println("Comisao: " + ((preco[i] * quantidade[i]) * 0.05f));

        }

        // falta objeto mais vendido e posicao no vetor
        int maisVendido = 0;
        int maiorQuantidade = quantidade[0];

        // trata mais vendido e posicao no vetor
        for (int i = 0; i < preco.length; i++) {
            if (quantidade[i] > maiorQuantidade) {
                maiorQuantidade = quantidade[i];
                maisVendido = i;
            }

        }

        System.out.println("Mais vendido: " + maisVendido + " Quantidade: " + maiorQuantidade);

    }// end main
}
