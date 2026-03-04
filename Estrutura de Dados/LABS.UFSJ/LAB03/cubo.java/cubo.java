
public class cubo()
{

        private double aresta;

        //
        public cubo(double aresta) {this.aresta = 0;}

        //setters
        public void setAresta(double aresta) {this.aresta = aresta};


        //gettes
        public double getAresta() {return this.aresta;}
        public double getArea() {return (this.aresta * this.aresta) * 6;}
        public double getVolume() {return (this.aresta * this.aresta * this.aresta;)}
        
}