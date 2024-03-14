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

    struct ficha_aluno *aluno;
    int ano, periodo, numero_de_alunos, numero_de_disciplinas;

    printf("\n---------- Cadastro de aluno -----------\n\n\n");

    printf("Digite o ano em que se encontra para cadastrar o aluno: ");
    scanf("%d", &ano);
    printf("Digite o periodo em que voce se encontra atualmente: ");
    scanf("%d", &periodo);
    printf("Digite quantos alunos voce deseja cadastrar: ");
    scanf("%d",&numero_de_alunos);
    aluno = (struct ficha_aluno*)malloc(numero_de_alunos*sizeof(struct ficha_aluno));

    for (int i = 0; i < numero_de_alunos; i++)
    {

        printf("Cadastro do aluno %d:\nQuantas disciplinas deseja cadastrar? ",i+1);
        scanf("%d", &numero_de_disciplinas);
        aluno[i].disciplina = (struct disciplina_aluno*)malloc(numero_de_disciplinas*sizeof(struct disciplina_aluno));
        printf("%d\n", sizeof(aluno[i].disciplina));
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
}