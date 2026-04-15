

public class Administrativo extends Assistente{
  
  private String turno;
  private float adicionalNoturno;


  public Administrativo() {}
  public Administrativo(String nome, String email, int numeroMatricula, String turno, float adicionalNoturno) {
  
    super(nome,email,numeroMatricula);
    this.turno = turno;
    this.adicionalNoturno;
  
  }
  
  @Override
  public static void exibeDados() {
  
    super.exibeDados() " Turno: " + this.turno + " Adicional Noturno: " + this.adicionalNoturno;

  }

}
