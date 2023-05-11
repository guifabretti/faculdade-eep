#include <stdio.h>
#include <stdlib.h>

//ler numero inteiro e retorne seu sucessor e antecessor

int main()
{
    int num;
    int sucessor;
    int antecessor;
    printf ("Digite um numero inteiro qualquer: \n");
    scanf("%d", &num);
    sucessor = num + 1;
    antecessor = num - 1;
    printf("Sucessor: %d \n", sucessor);
    printf("antecessor: %d \n", antecessor);
    return 0;
}
