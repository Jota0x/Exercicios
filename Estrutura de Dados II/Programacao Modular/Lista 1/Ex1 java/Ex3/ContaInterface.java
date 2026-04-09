import java.util.*;

public class ContaInterface{
    public static void main(String[] args){

        Scanner dado = new Scanner(System.in);

        Conta conta = new Conta(100,5000);
        int opcao;

        do{
            System.out.println(" ==== Menu ==== \n");
            System.out.println(" 1 - Depositar ");
            System.out.println(" 2 - Sacar ");
            System.out.println(" 3 - Ver Saldo ");
            System.out.println(" 0 - Sair ");

            opcao = dado.nextInt();

            switch(opcao){

                case 1: 

                    float valor = dado.nextFloat();
                    conta.depositar(valor);

                break;

                case 2:
                    
                    float valor = dado.nextFloat();
                    conta.sacar(valor);
                
                break;

                case 3:

                    conta.confirirSaldo();

                break;

                default: 

                    System.out.println("Erro");

                break;
            }


        }while(opcao != 0)



    }


}