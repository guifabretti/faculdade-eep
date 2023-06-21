#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// contrabarra = \n 

int main() {
    int i;
    char nome[8][50];
    float nota[8];
    float media = 0;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o nome do %d aluno: ", i + 1);
        fgets(nome[i], 50, stdin);
        printf("Digite a nota do %s: ", nome[i]);
        scanf("%f", &nota[i]);
        media += nota[i];
        getchar();
    }

    printf("Relatorio de notas: \n");
    for ( i = 0; i < 8; i++)
    {
        printf("%s: %.1f \n", nome[i], nota[i]);
    }

    media = media/8;
    printf("\nMedia da classe: %.2f", media);
}
