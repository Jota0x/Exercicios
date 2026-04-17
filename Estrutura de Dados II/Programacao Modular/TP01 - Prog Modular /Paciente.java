import java.util.*;

public class Paciente extends Entidade {
  
  private String nome;
  private String telefone;
  private String cpf;
  
  //Construtores
  public Paciente() {}
  public Paciente(int id, String nome, String telefone,boolean persistido) {

    super(id,persistido);
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


  //Salva Paciente
  @Override
  public boolean salvar() {
  
    if(!isPersistido())
    {
      System.out.println("Salvando Paciente: " + nome + " telefone: " + telefone + " cpf: " + cpf);

      return super.salvar();

    }
    else
      return false;
  }

  //Atualiza dados de Paciente 
  @Override
  public boolean atualizar()
  {
    if(isPersistido())
    {

      System.out.println("Atualizando dados de ID: " + getId());
      return true;
  
    }
    else
      return false;
  }

  //Apaga dados de Paciente 
  @Override
  public boolean apagar(int id)
  {
    if(isPersistido())
    {
      System.out.println("Apagando dados de ID: " + getId());
      setPersistido(false);;
      
      return true;
    }
    else
      return false;
  }

  @Override
  public boolean carregar(int id) {

    if(isPersistido())
    {
      return true;
    }
    else
      return false;
  }

  @Override
  public List<Entidade> carregarTodos() {

    //Implementar logica
    return new ArrayList<Entidade>();

  }

}
