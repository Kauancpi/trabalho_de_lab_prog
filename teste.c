#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct disciplina_aluno
    {
        char nome[100];
        int codigo;
        char professor[100];
        int creditos;
    };
    struct ficha_aluno
    {
        char codigo[6];
        char nome[100];
        int cpf;
        struct disciplina_aluno *disciplina;
    };


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