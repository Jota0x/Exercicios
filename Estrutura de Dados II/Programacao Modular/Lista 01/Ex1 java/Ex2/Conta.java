import java.util.*;

public class Conta{

    private int numero;
    private float saldo;

    Conta() {}
    Conta(int numero, int saldo){

        this.numero = numero;
        this.saldo = saldo;

    }

    //setters
    void setNumero(int numero) {this.numero = numero;}
    void setSaldo(float saldo) {this.saldo = saldo;}

    //getters
    int getNumero()  {return this.numero;}
    float getSaldo() {return this.saldo;}

    void depositar(float valor){
        saldo += valor;
    }

    void sacar(double valor){
        
        if(valor > saldo)
            System.out.println("erro");
        else
            saldo -= valor;

    }

    void confirirSaldo(){

        System.out.println(saldo);

    }



}