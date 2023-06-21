#include <stdio.h>

#define NUM_ALUNOS 6

typedef struct {
    char nome[20];
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];
    float mediaClasse = 0;
    int aprovados = 0, exame = 0, reprovados = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Informe o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Informe a primeira nota do aluno: ");
        scanf("%f", &alunos[i].nota1);
        printf("Informe a segunda nota do aluno: ");
        scanf("%f", &alunos[i].nota2);

        float media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        mediaClasse += media;

        if (media >= 7.0) {
            printf("%s: %.2f, %.2f, %.2f - Aprovado\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, media);
            aprovados++;
        } else if (media >= 4.0) {
            printf("%s: %.2f, %.2f, %.2f - Exame\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, media);
            exame++;
        } else {
            printf("%s: %.2f, %.2f, %.2f - Reprovado\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, media);
            reprovados++;
        }
    }

    mediaClasse /= NUM_ALUNOS;
    float percAprovados = (float)aprovados / NUM_ALUNOS * 100;
    float percExame = (float)exame / NUM_ALUNOS * 100;
    float percReprovados = (float)reprovados / NUM_ALUNOS * 100;

    printf("Média da classe = %.2f\n", mediaClasse);
    printf("Percentual de alunos aprovados = %.2f%%\n", percAprovados);
    printf("Percentual de alunos em exame = %.2f%%\n", percExame);
    printf("Percentual de alunos reprovados = %.2f%%\n", percReprovados);

    return 0;
}
