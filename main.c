#include<stdio.h>
#include <conio.h>


int main(){
    struct disciplina_aluno
    {
        char nome[100];
        char codigo[4];
        char professor[100];
        int creditos;
    };
    struct disciplina_aluno disciplina;
    struct ficha_aluno
    {
        char codigo[5];
        char nome[100];
        char cpf[11];
        int *materias;
    };
    struct ficha_aluno aluno;
    

    
    printf("\n---------- Cadastro de aluno -----------\n\n\n");
    
}