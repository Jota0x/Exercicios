

public class Assistente extends Funcionario{

  private int numeroMatricula;

  Assistente() {}
  Assistente(String nome, String email, int numeroMatriula){
    Super(nome,email);
  }


  //setters
  public void setNumeroMatricula(int numeroMatriacula) {this.numeroMatricula = numeroMatricula;}

  //setters
  public int getNumeroMatricula() {return this.numeroMatricula;}
  
  @Override
  public static void exibeDados(){
    
    super.exibeDados() + " Numero Matricula: " + this.numeroMatricula;

  }

}
