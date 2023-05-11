#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh, ms;
    printf("Digite uma velocidade em km/h para fazer a conversao em m/s \n");
    scanf("%f", &kmh);
    ms = kmh/3,6;
    printf("A sua velocidade em metros por segundo e %f m/s", ms);
}
