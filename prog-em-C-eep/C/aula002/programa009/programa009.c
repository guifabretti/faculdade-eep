#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main()
{
    float R, G;
    printf("digite um angulo em graus \n");
    scanf("%f", &G);
    R = G * PI/180;
    printf("seu numero em radianos e de: %f", R);
}
