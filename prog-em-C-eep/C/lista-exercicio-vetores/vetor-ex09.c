#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int i;
    char produtos[10][50];
    int codigo[10];
    int preco[10];

    for ( i = 0; i < 10; i++)
    {
        printf("\n Digite o nome do %d produto: ", i + 1);
        fgets(produtos[i],50,stdin); //stdin é o teclado
        printf("\n Digite o codigo do %d produto: ", i + 1);
        scanf("%d",&codigo[i]);
        printf("\n Digite o preco do %d produto: ", i + 1);
        scanf("%d",&preco[i]);
    }

    printf("\n ----- \n");
    printf("\n\nOs Produtos cadastrados foram: \n");
    
    for ( i = 0; i < 10; i++)
    {
        printf("%d) \n Nome: %d \nCodigo: %d \n Preco: %d", i+1, &produtos[i], &codigo[i], &preco[i]);
    }
    
    
}