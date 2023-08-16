#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];
    int valor;

    printf("Digite um nome : ");
    fgets (nome, 20,stdin);

    valor = strlen(nome);

    printf("O nome tem %d letras.\n", valor-1);

    return 0;
}