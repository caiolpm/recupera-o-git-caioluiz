# recupera-o-git-caioluiz
# Sistema de Cadastro de Alunos

## Nome do aluno
CAIO LUIZ PEREIRA MARQUUES
## Disciplina
Programação de Computadores
## Objetivo
Desenvolver um sistema simples de cadastro de alunos e utilizar Git e GitHub para controle de versões.
## Linguagem utilizada
C
## Descrição
O programa permite cadastrar informações de um aluno e exibir seus dados.
## Como executar

#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float nota;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("\n--- DADOS DO ALUNO ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Nota: %.2f\n", nota);

    return 0;
}
