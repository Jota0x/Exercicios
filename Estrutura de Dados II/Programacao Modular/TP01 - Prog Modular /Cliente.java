import java.util.*;

public class Cliente{

	private int id;
	private String nome;
	private String email;
	private String senha;
	
	
	public Cliente() {}
	public Cliente(int id, String nome, String email, String senha) {
		this.id = id;
		this.nome = nome;
		this.email = email;
		this.senha = senha;
	}

	//setters
	void setId(int id)	    {this.id = id;}
	void setNome(String nome)   {this.nome = nome;}
	void setEmail(String email) {this.email = email;}
	void setSenha(String senha) {this.senha = senha;}
	
	//getters
	int getId()	  {return this.id;}
	String getNome()  {return this.nome;}
	String getEmail() {return this.email;}
	String getSenha() {return this.senha;}


	
}
