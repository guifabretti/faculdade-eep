#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float celsius(int num);
float fahrenheit(int num);

int main()
{
    int num;
    int choice;

    printf("\nEscolha qual temperatura deseja:\n1) Celsisus\n2) Fahrenheit\nr: ");
    scanf("%d", &choice);
    
    printf("Digite um numero para convertelo na outra temperatura...\nr: ");
    scanf("%d", &num);

    if (choice == 1)
    {
        //celsius -> fahrenheit
        float fah = celsius(num);
        printf("%d celsius em fahrenheit e = %.2f", num, fah);
        return 0;
    }
    else if (choice == 2)
    {
        //fahrenheit -> graus
        float cel = fahrenheit(num);
        printf("%d fahrenheit em celsius e = %.2f", num, cel);
        return 0;
    }
    else if (choice != 1 && choice != 2)
    {
        printf("Insira um valor valido");
        return 1;
    }
}

float celsius(int num)
{
    float fah = num * 1.8 + 32;
    return fah;
}

float fahrenheit(int num)
{
    float cel = (num-32) * 5/9;
    return cel;
}