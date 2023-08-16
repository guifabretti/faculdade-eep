#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];
    int valor;

    printf("digite um nome : ");
    fgets (nome, 20,stdin);

    nome[strcspn(nome, "\n")] = '\0';

    valor = strlen(nome);

    printf("o nome possui %d letras.\n", valor);


    return 0;



}
