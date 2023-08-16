#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    char sexo[5];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Digite o sexo (fem/mas): ");
    fgets(sexo, 5, stdin);

    sexo[strcspn(sexo, "\n")] = '\0';

    if (strcmp(sexo, "fem") == 0 && idade < 25) { 
        printf("%s", nome);
        printf("ACEITA\n");
    } else {
        printf("NAO ACEITA\n");
    }

    return 0;
}