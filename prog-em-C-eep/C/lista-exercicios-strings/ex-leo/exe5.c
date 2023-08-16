#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int i;

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome de tras para frente: ");
    for (i = strlen(nome) - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }

    printf("\n");

    return 0;
}
