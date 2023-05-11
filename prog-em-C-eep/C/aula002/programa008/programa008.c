#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel,fah;
    printf("Escreva o valor de celsius: \n");
    scanf("%f", &cel);
    fah=(cel*9/5)+32;
    printf("O valor de celsius em fahrenheit e: %.1f", fah);
}
