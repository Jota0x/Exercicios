

public class Tecnico extends Assistente{

  private float bonus;

  Assistente() {}
  Assistente(String nome, String email, int numeroMatricula, float bonus){

    super(nome,email,numeorMatricula);
    this.bonus = bonus;
  
  }

  //setters
  public void setBonusSalario(float bonus) {this.bonus = bonus;}

  //getters
  public float getBonus() {return this.bonus;}

  @Override
  public static void exibeDados(){

  super.exibeDados() + " Bonus Salarioal: " + this.bonus;

  }

}
