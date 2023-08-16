#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);
    
    printf("Nome de tras para frente: ");

    for (int i = strlen(nome) - 1; i >= 0; i--){
        printf("%c", nome[i]);
    }
    return 0;
}
