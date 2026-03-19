	import java.util.*;

	class LAB05{
		public static void main(String[] args){

			Scanner dado = new Scanner(System.in);
			int n;		//numero de testes
			int tipo;	//tipo do comando
			int x;		//inteiro
			
			
			int controleIN = 0;
			int controleOUT = 0;	


			n = dado.nextInt();
			int[] 	saida = new int[n];
			int[]  entrada = new int[n];


			for(int i = 0; i < n;i++)
			{
				tipo = dado.nextInt();
				x = dado.nextInt();

				if(tipo == 1)
				{
					entrada[controleIN] = x;
					controleIN++;
				}
				else if(tipo == 2)
				{
					saida[controleOUT] = x;
					controleOUT++;
				}
				
			}
			
			test(entrada,saida,n);



		}

		public static void test(int entrada[],int saida[],int n){
			boolean fila = false;
			boolean pilha = false;
			boolean filaprio = false;
			
			int aux = 0;

			for(int i = 0; i < n;i++)
			{
				if(entrada[i] == saida[i])
					aux++;	
			}
			
			if(aux == n/2)
				fila = true;

			int aux2 = 0;
			
			int controle = n - 1;

			for(int i = 0; i < n;i++)
			{
				if(entrada[i] == saida[controle])
					aux++;
				controle--;
			}
			
			if(aux2 == n/2)
			{
				pilha = true;
				filaprio = true;
			}

			

			if(fila == true)
				System.out.println("queue");
			else if(pilha == true && filaprio == true)
				System.out.println("not sure");
			else
				System.out.println("impossible");




		}

	}
