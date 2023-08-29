#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int randomizer();

int main()
{
    int num;

    printf("--- JOGO DE ADIVINHACAO ---\n O computador gerara um numero aleatorio e voce deve descobrir qual e com tentativa e erro.\n");

    int numale = randomizer();
    
    printf("\n... numero randomizado ...\n");
    
    do
    {
        printf("\nTente descobrir o numero: ");
        scanf("%d", &num);
    } while (num != numale);

    if (num == numale)
    {
        printf("\n!!!! VOCE ACERTOU !!!!\n\n");
    }
    return 0;
}

int randomizer()
{
    srand(time(NULL));
    int numale = rand() %10 + 1;
    return numale;
}