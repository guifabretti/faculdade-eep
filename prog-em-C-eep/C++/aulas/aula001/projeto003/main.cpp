#include <stdio.h>
#include <cstdlib>

main()
{
    int x,y,s;
    printf("Digite um numero inteiro:");
    scanf("%d",&x); //ler como um inteiro e guardar na variavel x
    printf("Digite outro numero inteiro:");
    scanf("%d",&y); //ler como um inteiro e guardar na variavel x
    s = x+y;
    printf("A soma e: %d",s);
    system("pause");
}
