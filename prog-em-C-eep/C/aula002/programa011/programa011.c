#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    float raio, area;
    printf("Digite o raio de seu circulo \n");
    scanf("%f", &raio);
    area=PI*(raio*raio);
    printf("O valor da area do seu circulo e de: %f", area);
}
