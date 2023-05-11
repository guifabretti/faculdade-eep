#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int anodenascimento;

    printf("Quantos anos voce tem? \n");
    scanf("%d", &idade);

    anodenascimento = 2023 - idade;

    printf("Voce nasceu no ano: %d:", anodenascimento);
}
