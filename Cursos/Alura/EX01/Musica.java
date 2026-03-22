package EX01;
public class Musica extends Audio{

    private String album;
    private Boolean favorito;
    
    //setters
    void setAlbum(String album)         {this.album = album;}
    void setFavorito(Boolean favorito)  {this.favorito = favorito;}

    //getters
    String getAlbum(String album)         {return this.album;}
    Boolean getFavorito(Boolean favorito) {return this.favorito;}

    Musica(String nome, float duracao,String cantor,int vizualizacao,String album,Boolean favorito){

        super(nome,duracao,cantor,vizualizacao);
        this.album = album;
        this.favorito = favorito;

    }

    @Override
    public void imprimir(){

        //dados de musica 
        System.out.println("Cantor" + getCantor());
        System.out.println("Album" + album);
        System.out.println("Musica" + getNome());

        //dados de audio
        System.out.println("Duracao" + getDuracao());
        System.out.println("Numero de vizualizacao" + getVizualizacao());

    }
   


}
