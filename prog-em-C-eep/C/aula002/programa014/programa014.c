#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char minuscula, maiuscula;

    printf("digite a letra minuscula \n");
    scanf("%c", &minuscula);

    maiuscula = minuscula - 32;

    printf("letra maiuscula: %c", maiuscula);
}
