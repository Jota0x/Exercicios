import java.util.*;

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
public void setCpf(String cpf) {this.cpf = cpf;}

//getters
public String getNome() {return this.nome;}
public String getTelefone() {return this.telefone;}
public String getCpf() {return this.cpf;}

//Salva Funcionario
@Override
public boolean salvar() {
  
    if(!isPersistido()){

      System.out.println("Profissional salvo! ID: " + getId());

      return salvar();
    }
    else 
      return false;

}

//Atualiza Funcionario
@Override
public boolean atualizar() {
  
    if(isPersistido()) {

      System.out.println("Dados atualizados ID: " + getId());

      return true;

    }
    else 
      return false;

}

//Apaga Funcionario
@Override
public boolean apagar(int id) {

    if(isPersistido()) {
      
      System.out.println("Profissional apagado: " + getId());
      setPersistido(false);
      return true;

    }
    else 
      return false;
}

@Override
public boolean carregar(int id) {
  
  if(isPersistido()) {

    //implementar logica

    return true;
  }
    else
      return false;

}

@Override
public List<Entidade> carregarTodos() {

  //Implementar logica depois
  return new ArrayList<>();

}
}