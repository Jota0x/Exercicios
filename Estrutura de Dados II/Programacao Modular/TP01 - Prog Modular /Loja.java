import java.util.*;

public class Loja{

	private int id;
	private String nome;
	private String email;
	private String senha;
	private ArrayList<Produto> produtod = new ArrayList<Produto>();
	
	//Construtores
	public Loja() {}
	
	//setters
	void setId(int id) {this.id = id;}
	void setNome(String nome) {this.nome = nome;}
	void setEmail(String email) {this.email = email;}
	void setSenha(String senha) {this.senha = senha;}
	//set Produto
	
	//getters
	int getId() {return this.id}
	String getNome() {return this.nome;}
	String getEmail() {return this.email;}
	String getSenha() {return this.senha;}
	//get Produto


	

}
