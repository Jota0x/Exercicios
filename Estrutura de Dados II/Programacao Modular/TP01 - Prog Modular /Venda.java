
public class Venda{

	private int produtoId;
	private int clienteId;
	private int id; 	//id da venda 
	
	//Construtores
	public Venda() {}
	public Venda(int produtoId,int clienteId, int id){
	
		this.produtoId = produtoId;
		this.clienteId = clienteId;
		this.id = id;
	}
	
	
	//setters
	void setProdutoId(int produtoId) {this.produtoId = produtoId;}
	void setClienteId(int clienteId) {this.clienteId = clienteId;}
	void setId(int id) {this.id = id;}

	//getters
	int getProdutoId() {return this.produtoId;}
	int getClienteId() {return this.cliente.Id;}
	int getId() {return this.id;}


		
}
