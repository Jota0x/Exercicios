


public class Profissional extends Entidade {

private String nome;
private String telefone;
private String cpf;


//Construtores
public Profissional() {}
public Profissional(int id, String nome, String telefone, String cpf, boolean persistido) {

  super(id, persistido);
  this.nome = nome;
  this.telefone = telefone;
  this.cpf = cpf;

}

//setters
public void setNome(String nome) {this.nome = nome;}
public void setTelefone(String telefone) {this.telefone = telefone;}
public void setCpf(String cpf) {this.cpf = cpf}

//getters
public String getNome() {return this.nome;}
public String getTelefone() {return this.telefone;}
public String getCpf() {return this.cpf;}

//Salva Funcionario
@Override
public static boolean salvar() {
  
    if(!isPersistido()){

      System.out.println("Profissional salvo! ID: " + this.id);

      return super().salvar();
    }
    else 
      return false;

}

//Atualiza Funcionario
@Override
public static boolean atualizar {
  
    if(this.persistido) {

      System.out.println("Dados atualizados ID: " + this.id);

      return true;

    }
    else 
      return false;

}

//Apaga Funcionario
@Override
public static boolean apagar() {

    if(this.persistido) {
      
      System.out.println("Profissional apagado: " + this.id);
      this.persistido = false;

    }
    else 
      return false;
}

@Override
public static boolean carregar() {
  
  if(this.persistido) {

    //implementar logica

    return true;
  }
    else
      return false;

}

@Override
public List<Entidade> carregarTodos() {

  //Implementar logica depois

}
