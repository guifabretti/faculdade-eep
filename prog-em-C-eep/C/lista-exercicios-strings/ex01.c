#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];
    printf("Digite seu nome: ");
    fgets(nome,5,stdin);

    printf("%s", nome);

    return 0;
}