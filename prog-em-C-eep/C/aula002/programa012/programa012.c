#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    float raio,V,altura;

    printf("escreva a altura do seu cilindro \n");
    scanf("%f", &altura);
    printf("escreva o raio do seu cilindro \n");
    scanf("%f", &raio);
    V=PI*(raio*raio)*altura;
    printf("o volume do seu cilindro e: %.1f", V);
}
