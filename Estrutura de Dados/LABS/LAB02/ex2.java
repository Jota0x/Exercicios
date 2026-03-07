import java.util.*;

//exercicio resolvido, porem verificar entrada verde
public class ex2{
    public static void main(String[] args)
    {
        int piso;
        int teto;

        Scanner dado = new Scanner(System.in);

        piso = dado.nextInt();
        teto = dado.nextInt();
        
        
        for(int i = piso; i <= teto;i++ )
            System.out.print(i);

        for(int i = teto; i >= piso;i--)
        {   
            if(i > 10)
                System.out.printf("%d%d",i % 10,i/10);
            else 
                System.out.print(i);
        }
        
        

        dado.close();
    }

}