#include <stdio.h>
#include <stdlib.h>



int main()
{
    float num;
    float numfinal;
    printf(" digite um numero real: \n");
    scanf("%f", &num);
    numfinal = num/5;
    printf("A quinta parte do numero %.1f e: %.1f",num,numfinal);
}
