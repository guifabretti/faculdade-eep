#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// contrabarra = \ 

int main(){
    float produto, valor;

    printf("Digite o valor do produto: \n");
    scanf("%f",&produto);

    if (produto < 20)
    {
        valor = produto * 1.45;
        printf("O valor do produto revendido sera de: %.1f reais", valor);
    } else{
        valor = produto * 1.30;
        printf("O valor do produto revendido sera de: %.1f reais", valor);
    }
    
}