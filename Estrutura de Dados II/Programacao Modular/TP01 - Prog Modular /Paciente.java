

public class Paciente extends Entidade {
  
  private String nome;
  private String telefone;
  private String cpf;
  
  //Construtores
  public Pacinete() {}
  public Paciente(int id, String nome, String telefone) {

    super(id);
    this.nome = nome;
    this.email = telefone;
    this.senha = cpf;;

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
  boolean salvar() {
  
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
  boolean atualizar()
  {
    if(this.persistido)
    {

      System.out.println("Atualizando dados de ID: " + this.id);
      return true;
  
    }
    else
      return false;
  }

  //Apaga dados de Paciente 
  @Override
  boolean apagar(int id)
  {
    if(this.persistido)
    {
      System.out.println("Apagando dados de ID: " + this.id);
      this.persistido = false;
      
      return true;
    }
    else
      return false;
  }

  @Override
  boolean carregar(int id) {

    if(this.persistido)
    {
      return true;
    }
    else
      return false;
  }

  @Override
  public List<Entidade> carregarTodos() {

    //Implementar logica

  }


  

  



}
