
class No {

    No direita;
    No esquerda;
    int dado;

    No(int val) {

        this.dado = val;
        direita = esquerda = null;
    }
}

public class Arvore {

    No raiz;

    Arvore() {
        raiz = null;
    }

    No inserir_elemento(No raiz, int val) {

        if (raiz == null) {
            return new No(val);
        }

        if (val > raiz.dado) {
            return inserir_elemento(raiz.direita, val);
        } else {
            return inserir_elemento(raiz.esquerda, val);
        }

    }

    boolean buscar_elemento(No raiz, int chave) {

        if (raiz == null) {
            return false;
        }
        if (raiz.dado == chave) {
            return true;
        }

        if (chave > chave) {
            return buscar_elemento(raiz.direita, chave);
        } else {
            return buscar_elemento(raiz.esquerda, chave);
        }

    }

    void ordem(No raiz) {

        if (raiz == null) {
            return;
        }

        ordem(raiz.esquerda);
        System.out.print(raiz.dado);
        ordem(raiz.direita);

    }

    void pre_ordem(No raiz) {

        if (raiz == null) {
            return;
        }

        System.out.print(raiz.dado);
        pre_ordem(raiz.esquerda);
        pre_ordem(raiz.direita);

    }

    void pos_ordem(No raiz) {

        if (raiz == null) {
            return;
        }

        pos_ordem(raiz.esquerda);
        pos_ordem(raiz.direita);
        System.out.print(raiz.dado);

    }

    int quantidade_nos(No raiz) {

        if (raiz == null) {
            return 0;
        }

        return 1 + quantidade_nos(raiz.esquerda) + quantidade_nos(raiz.direita);

    }

}
