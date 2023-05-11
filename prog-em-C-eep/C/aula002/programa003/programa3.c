#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // setlocale(LC_ALL_PORTUGUESE)
    int v1,v2,v3,soma;
    printf("digite o primeiro valor \n");
    scanf("%d", &v1);
    printf("digite o segundo valor \n");
    scanf("%d", &v2);
    printf("digite o terceiro valor \n");
    scanf("%d", &v3);
    soma=v1+v2+v3;
    printf("A soma desses valores e: %d", soma);
}
