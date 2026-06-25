#include <stdio.h>
#include <string.h>

struct Data {
    int dia, mes, ano;
};

struct Evento {
    char descricao[100];
    struct Data data;
};

#define N 2

void imprimirData(struct Data *data) {
    printf("Data: %02d/%02d/%04d\n", data->dia, data->mes, data->ano);
}

void imprimirEvento(struct Evento *evento) {
    printf("Evento: %s\n", evento->descricao);
    imprimirData(&evento->data);
}

void imprimirArrayEventos(struct Evento *arrEventos, int n) {
    for(int i = 0; i < n; i++) {
        imprimirEvento(&arrEventos[i]);
        printf("---\n");
    }
}

int main() {
    struct Evento ev = {"Prova Final", {12, 6, 2026}};

    struct Evento arrEventos[N] = {
        {"Prova Final", {12, 6, 2026}},
        {"Prova Substitutiva", {19, 6, 2026}}
    };

    imprimirEvento(&ev);
    printf("---\n");
    imprimirArrayEventos(arrEventos, N);
    return 0;
}