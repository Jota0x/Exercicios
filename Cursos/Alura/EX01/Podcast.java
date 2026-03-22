package EX01;

public class Podcast extends Audio {

    private String nomePodcast;
    private String apresentador;
    private String participante;


    Podcast(){}

    Podcast(String nome, float duracao,String cantor,int vizualizacao,String apresentador,String participante){
        
        super(nome,duracao,cantor,vizualizacao);
        this.nomePodcast = nomePodcast;
        this.apresentador = apresentador;
        this.participante = participante;

    }

    //setters
    void setNomepodcast(String nomePodcast)     {this.nomePodcast = nomePodcast;}
    void setApresentar(String apresentar)       {this.apresentador = apresentar;}
    void setParticipante(String participante)   {this.participante = participante;}

    //getters
    String getNomePodcast()  {return this.nomePodcast;}
    String getApresentador() {return this.apresentador;}
    String getParticipante() {return this.participante;}

    @Override
    public void imprimir(){   

        //intformações do Podcast
        System.out.println("Podcast: " + nomePodcast);
        System.out.println("Participante: " + participante);
        System.out.println("Apresentador: " + apresentador);

        //padrão audio
        System.out.println("Episodio: " + getNome());
        System.out.println("Duracao: " + getDuracao());
        System.out.println("Numero de vizualizacoes: " + getVizualizacao());
        
    }


}


