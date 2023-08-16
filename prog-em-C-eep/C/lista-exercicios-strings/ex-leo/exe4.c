#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("\ndigite um nome: ");
    fgets(nome,50, stdin);

    nome[strcspn(nome, "\n")] = '\0';

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("\no nome comeca com a letra 'a': %s\n", nome);
    } else {
        printf("\no nome não começa com a letra 'a'.\n");
    }

    return 0;
}
