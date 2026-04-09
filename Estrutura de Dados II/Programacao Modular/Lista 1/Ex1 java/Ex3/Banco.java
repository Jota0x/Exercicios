import java.util.*;

public class Banco{

    Arraylist<Conta> contas = new Arraylist<Conta>();

    //getters
    public static Arraylist<Conta> getConta() {return this.contas;}

    public static adicionarConta(Conta newConta){

        contas.add(newConta);

    }




}
