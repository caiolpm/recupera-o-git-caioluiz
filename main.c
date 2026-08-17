#include <stdio.h>

int main() { char nome[100]; int idade; float nota;

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
