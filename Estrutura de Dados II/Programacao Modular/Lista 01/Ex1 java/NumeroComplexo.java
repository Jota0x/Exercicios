import java.util.*;

public class NumeroComplexo{

    private double a;
    private double b;


    public NumeroComplexo() {}
    public NumeroComplexo(double a, double b){

        this.a = a;
        this.b = b;

    }

    //setter
    void setA(double a) {this.a = a;}
    void setB(double b) {this.b = b;}

    //getters
    double getA() {return this.a;}
    double getB() {return this.b;}

    public static void NumeroComplexo soma(NumeroComplexo num){

        NumeroComplexo resultado = new NumeroComplexo();

        resultado.a = this.a + num.a;
        resultado.b = this.b + num.b;

        return resultado;

    }

    public static void NumeroComplexo produto(NumeroComplexo num){

        NumeroComplexo resultado = new NumeroComplexo();

        

        return resultado;

    }


}