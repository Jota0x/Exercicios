import java.util.*;

public class Produto{
	
	private int id;
	private String nome;
	private float valor;
	private int quantidade;
	private boolean persistido = false;

	//Construtores
	public Produto() {}
	public Produto(int id, String nome, float valor, int quantidade, boolean persistido) {
		
		this.id = id;
		this.nome = nome;
		this.valor = valor;
		this.quantidade = quatidade;
		this.persistido = persistido;

	}
	
	//setters
	void setId(int id) {return this.id;}
	void setNome(String nome) {return this.nome;}
	void setValor(float valor) {return this.valor;}
	void setQuantidade(int quantidade) {this.quantidade = quantidade;}
	void setPersistido(boolean persistido) {this.persistido = persistido;}
	
	//getters
	int getId() {return this.id;}
	String getNome() {return this.nome;}
	float getValor() {return this.valor;}
	int getQuantidade() {return this.quantidade;}
	boolean isPersistido() {return this.persistido;}
	

	public static void salvar(Produto p) {
	
		if(Loja.produtos.p.isPersistido())
			return false;

		p.setId(p.id);
		Lista.produtos.add(p);

		return true;
	}

	public static void 
	



}
