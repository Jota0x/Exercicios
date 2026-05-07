    #ifndef ALUNO_H
    #define ALUNO_H

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct Aluno{

        char *nome;
        int matricula;
        double nota;
        
    }Aluno;

    Aluno *cadastrar_aluno(char *nome, int matricula, double nota);

    #endif

