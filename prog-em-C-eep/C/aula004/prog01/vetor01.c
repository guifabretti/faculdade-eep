#include <stdio.h>
#include <stdlib.h>

// Ler 10 numeros e armazenar em um vetor
// Exibir os 10 numeros lidos

// contrabarra = \ 

int main(){
    float num[10];
    int i;
    int soma;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero %d: \n", i);
        scanf("%f", &num[i]);
        soma = soma + num[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("Numeros: %.1f \n", num[i]);
    }

    printf("\n Soma dos elementos: %d \n", soma);
    
    
    // imprime na ordem inversa:
    printf("\n Ordem inversa: \n");
    for (i = 9; i >= 0; i--)
    {
        printf("Numeros: %.1f \n", num[i]);
    }
    

    // exibir a soma dos numeros impares:
    soma = 0;
    for (i = 0; i < 10; i++)
    {

        if (i % 2 == 1)
        {
            soma = soma + i;
        }
    }
    printf("\n Soma dos numeros impares: %d \n", soma);

    return 0;
}