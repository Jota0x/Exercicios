// Arquivo ponto.h
typedef struct Ponto ponto;

// Cria um novo ponto
Ponto *ptoCria(float x, float y);

// Libera um ponto
void ptoLibera(Ponto *p);

// Acessa os valores "x" e "y" de um ponto
void ptoAcessa(Ponto *p, float *x, float *y);

// Atribui os valores "x" e "y" a um ponto
void ptoAtribui(Ponto *p, float x, float y);

// Calcula a distância entre dois pontos
float ptoDistancia(Ponto *p1, Ponto *p2);