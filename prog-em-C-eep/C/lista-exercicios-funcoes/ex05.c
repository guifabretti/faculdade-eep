#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int contagem_vogais(char frase[]);
int contagem_consoantes(char frase[]);

int main()
{
    char frase[50];

    printf("Digite uma frase de ate 50 caracteres: \n");
    fgets(frase, sizeof(frase), stdin);

    int vognum = contagem_vogais(frase);
    int connum = contagem_consoantes(frase);

    printf("Nesta frase existem...\n %d Vogais\n %d Consoantes\n", vognum, connum);
}

int contagem_vogais(char frase[])
{
    int vognum = 0;
    for (int i = 0; i < strlen(frase); i++)
    {
        frase[i] = toupper(frase[i]);
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            vognum++;
        }
    }
    return vognum;
}

int contagem_consoantes(char frase[])
{
    int connum = 0;
    for (int i = 0; i < strlen(frase); i++)
    {
        frase[i] = toupper(frase[i]);
        if (frase[i] >= 'B' && frase[i] <= 'Z' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U')
        {
            connum++;
        }
    }
    return connum;
}
