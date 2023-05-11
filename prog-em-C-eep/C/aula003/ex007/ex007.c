#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,resp1,resp2,delta;

    printf("Digite, em sequencia, os coeficientes da equacao de bhaskara:");
    scanf("%f%f%f",&a,&b,&c);

    delta = (b*b) - 4*a*c;

    if (delta > 0)
    {
        resp1 = (-b + sqrt(delta)) / (2*a);
        resp2 = (-b - sqrt(delta)) / (2*a);
        printf("X1 = %.1f, X2 = %.1f", resp1,resp2);
    }

    if (delta == 0)
    {
        resp1 = -b /(2*a);
        printf("X = %f",resp1);
    }

    if (delta < 0)
    {
        printf("a euqacao nao possui raizes reais");
    }
}