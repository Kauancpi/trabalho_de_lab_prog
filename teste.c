#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos{
    int codigo;
    char nome[50];
    char cpf[11];
    int *materias;
} aluno;

typedef struct disciplinas{
    int codigo;
    char nome[50];
    char professor[50];
    int creditos;

}  disciplina;


int main(){
    char continuar='y';
    FILE *teste;
    int ano;
    char titulo_txt[15];
    char sano[10];
    char speriodo[15];
    int periodo;
    while(continuar=='y' || continuar=='y'){
        
        scanf("%d %d",&ano,&periodo);
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }
        
        
        sprintf(sano,"%d",ano);
        sprintf(speriodo,"%d",periodo);
        strcpy(titulo_txt,sano);
        strcat(titulo_txt,"_");
        strcat(titulo_txt,speriodo);
        strcat(titulo_txt,".txt");

        printf("%s",titulo_txt);
        
        teste = fopen(titulo_txt,"w");

        fclose(teste);
    
        
        scanf("%c",&continuar);



         
    }

    return(0);
}