import java.util.*;

public abstract class Entidade {
  
  private int id;
  private boolean persistido;

  //Construtores
  Entidade() {}

  Entidade(int id) {
    this.id = id;
  }

  Entidade(int id, boolean persistido) {

    this.id = id;
    this.persistido = false;

  }
  
  //setters
  public void setId(int id) {this.id = id;}
  public void setPersistido(boolean persistido) {this.persistido = persistido;}

  //getters
  public int getId() {return this.id;}
  public boolean isPersistido() {return this.persistido;} 

  //metodo para salvar
  public boolean salvar() {
  
    if(!isPersistido()) {
      
      this.persistido = true;
      
      return true;
    }
    return false;
  }



  //Metodos abstratos 
  public abstract boolean atualizar(); 
  public abstract boolean apagar(int id);
  public abstract boolean carregar(int id);
  public abstract List<Entidade> carregarTodos();

}
