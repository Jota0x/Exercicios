

public class Funcionario{
  
  private String nome;
  private String email;

  public Funcionario() {}
  public Funcionario(String nome, String email){

    this.nome = nome;
    this.email = email;

  }

  //setters
  public void setNome(String nome) {this.nome = nome;}
  public void setEmail(String email) {this.email = email;}
  
  //getters
  public String getNome() {return this.nome;}
  public String getEmáil() {return this.email;}
  

  public static void exibeDados(){

    System.out.println("Nome: " + this.nome " Email: " + this.email);

  }

}
