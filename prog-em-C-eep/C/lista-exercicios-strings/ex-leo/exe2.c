#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    int idade;
    char sexo[10];

    printf("Digite o nome: ");
    fgets(nome, 20, stdin);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Digite o sexo: ");
    fgets(sexo, 10, stdin);

    sexo[strcspn(sexo, "\n")] = '\0';

    if (strcmp(sexo, "feminino") == 0 && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("NAO ACEITA\n");
    }

    return 0;
}
