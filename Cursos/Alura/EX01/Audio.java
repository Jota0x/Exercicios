package EX01;

public class Audio{


    private String nome;
    private String cantor;
    private float duracao;
    private int vizualizacao;

    //construtores
    Audio() {}

    Audio(String nome, float duracao,String cantor,int vizualizacao)
    {
        this.nome = nome;
        this.cantor = cantor;
        this.duracao = duracao;
        this.vizualizacao = vizualizacao;

    }

    //setters
    void setNome(String nome)               {this.nome = nome;}
    void setCantor(String cantor)           {this.cantor = cantor;}
    void setDuracao(float duracao)          {this.duracao = duracao;}
    void setVizualizacao(int vizualizacao)  {this.vizualizacao = vizualizacao;}

    //getter
    String getNome()        {return this.nome;}
    String getCantor()      {return this.cantor;}
    float getDuracao()      {return this.duracao;}
    int getVizualizacao()   {return this.vizualizacao;}

    //imprime dados do audio
    public void imprimir() {

        System.out.println("Musica: " + nome);
        System.out.println("Cantor: " + cantor);
        System.out.println("Duracao: " + duracao);
        System.out.println("Numero de Vizualizacao: " + vizualizacao);

    }



}
