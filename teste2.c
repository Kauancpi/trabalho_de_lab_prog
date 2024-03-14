#include<stdio.h>
#include <conio.h>
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
    int c;
    char continuar='y'; 
    while(continuar=='y'||continuar=='Y'){
    
    
    
    
    struct ficha_aluno *aluno;
    int ano, periodo, numero_de_alunos, numero_de_disciplinas;

    FILE *teste;
    char sano[10];
    char speriodo[15];
    char titulo_txt[15];

    printf("\n---------- Cadastro de aluno -----------\n\n\n");

    printf("Digite o ano em que se encontra para cadastrar o aluno: ");
    scanf("%d", &ano);
    printf("Digite o periodo em que voce se encontra atualmente: ");
    scanf("%d", &periodo);
    printf("Digite quantos alunos voce deseja cadastrar: ");
    scanf("%d",&numero_de_alunos);
    aluno = (struct ficha_aluno*)malloc(numero_de_alunos*sizeof(struct ficha_aluno));

    sprintf(sano,"%d",ano);
    sprintf(speriodo,"%d",periodo);
    strcpy(titulo_txt,sano);
    strcat(titulo_txt,"_");
    strcat(titulo_txt,speriodo);
    strcat(titulo_txt,".txt");
        
    teste = fopen(titulo_txt,"w");

    fclose(teste);



    for (int i = 0; i < numero_de_alunos; i++)
    {

        printf("Cadastro do aluno %d:\nQuantas disciplinas deseja cadastrar? ",i+1);
        scanf("%d", &numero_de_disciplinas);
        aluno[i].disciplina = (struct disciplina_aluno*)malloc(numero_de_disciplinas*sizeof(struct disciplina_aluno));
        if (aluno[i].disciplina == NULL)
        {
            printf("Deu ruim");
        }
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);
        printf("Digite o codigo do aluno: ");
        scanf("%s", aluno[i].codigo);
        printf("Digite o cpf do aluno (apenas numeros): ");
        scanf("%d", &aluno[i].cpf);
        printf("Cadastro de disciplinas:\n");

        for (int j = 0; j < numero_de_disciplinas; j++)
        {
            printf("Digite o codigo da disciplina %d: ", j+1);
            scanf("%d",&aluno[i].disciplina[j].codigo);
            printf("Digite o nome da disciplina %d: ", j+1);
            scanf("%s",aluno[i].disciplina[j].nome);
            printf("Digite o professor da disciplina %d: ", j+1);
            scanf("%s",aluno[i].disciplina[j].professor);
            printf("Digite a quantidade de creditos da disciplina %d: ", j+1);
            scanf("%d",&aluno[i].disciplina[j].creditos);
        }
        printf("%s", aluno[0].disciplina[0].professor);
    }


    
    printf("Gostaria de continuar? Y/y se sim e qualquer outra teclas se nao");
    while ((c = getchar()) != '\n' && c != EOF) { }
    scanf("%c",&continuar);



    
    
    
    
    
    }
}