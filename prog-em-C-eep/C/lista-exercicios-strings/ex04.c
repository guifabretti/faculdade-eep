#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome,50, stdin);

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("\n O nome comeca com a letra 'a': %s\n", nome);
    } else {
        printf("\n O nome nao comeca com a letra 'a'.\n");
    }

    return 0;
}