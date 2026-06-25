#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

#define N 2

void inicializarAlunos(struct Aluno *alunos, int n) {
    for(int i = 0; i < n; i++) {
        printf("Informe o nome do aluno: ");
        scanf("%s", &alunos[i].nome);

        printf("Informe a idade do aluno: ");
        scanf("%d", &alunos[i].idade);

        printf("Informe a nota do aluno: ");
        scanf("%f", &alunos[i].nota);
        printf("---\n");
    }
}

void imprimirAlunos(struct Aluno *alunos, int n) {
    for(int i = 0; i < n; i++){
        printf("Aluno: %d\n", i);
        printf("- Nome: %s\n", alunos[i].nome);
        printf("- Idade: %d\n", alunos[i].idade);
        printf("- Nota: %.2f\n", alunos[i].nota);
        printf("\n");
    }
}

void alterarNota(struct Aluno *alunos, float novaNota) {
    alunos->nota = novaNota;
    printf("Nova nota de %s: %.2f\n", alunos->nome, alunos->nota);
}

int main() {
    struct Aluno alunos[N];

    inicializarAlunos(alunos, N);
    imprimirAlunos(alunos, N);
    alterarNota(&alunos[0], 5);
    return 0;
}