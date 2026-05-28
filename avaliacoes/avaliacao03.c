#include <stdio.h>
#include <string.h>

// Avaliação 3 Linguagem de Programação - 28/05/2026

struct Aluno {
    char nome[50];
    float nota;
    int aprovado; // 0 = nao, 1 = sim
};

// Função que atribui o valor do campo aprovado
// Nota mínima para ser aprovado é 6
void avaliar(struct Aluno *a) {
    if (a->nota >= 6 && a->nota <= 10) {
        a->aprovado = 1;
    } else {
        a->aprovado = 0;
    }
}

// Função que avalia a turma inteira
void avaliarTurma(struct Aluno *v, int n) {
    for(int i = 0; i < n; i++) {
        avaliar(&v[i]);
    }
}

// Função que conta quantos alunos foram aprovados na turma
int contarAprovados(struct Aluno *v, int n) {
    int contadorAprovados = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].aprovado == 1) {
            contadorAprovados++;
        }
    }

    return contadorAprovados;
}

// Função que imprime a saída das informações
void imprimirEstatisticas(struct Aluno *v, int n) {
    for (int i = 0; i < n; i++) {
        if (v[i].aprovado == 1) {
            printf("%s: APROVADO (nota: %.1f)\n", v[i].nome, v[i].nota);
        } else {
            printf("%s: REPROVADO (nota: %.1f)\n", v[i].nome, v[i].nota);
        }
    }
    printf("Aprovados: %d/4\n", contarAprovados(&v[0], 4));
}

int main() {
    struct Aluno alunos[4];

    strcpy(alunos[0].nome, "Ana");
    alunos[0].nota = 6;

    strcpy(alunos[1].nome, "Bia");
    alunos[1].nota = 1;

    strcpy(alunos[2].nome, "Caio");
    alunos[2].nota = 10;

    strcpy(alunos[3].nome, "Davi");
    alunos[3].nota = 5.5;

    avaliarTurma(&alunos[0], 4);

    imprimirEstatisticas(&alunos[0], 4);

    return 0;
}