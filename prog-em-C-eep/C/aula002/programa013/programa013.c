#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cat1,cat2,hip;

    printf("Escreva o cateto A e o B do seu triangulo \n");
    scanf("%f%f", &cat1, &cat2);

    // hip = sqrt((cat1*cat1)+(cat2*cat2));

    hip = pow(pow(cat1, 2) + pow(cat2, 2),0.5);

    printf("o resultado da hipotenusa e: %.2f", hip);
}
