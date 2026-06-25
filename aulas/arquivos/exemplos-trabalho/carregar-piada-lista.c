#include <stdio.h>
#include <stdlib.h>
#include "piadas.h"

typedef struct No {
    Piada piada;
    struct No *proximo;
} No;

No *lista = NULL;

void carregarPiadas(char *nomeArquivo) {
    FILE *f = fopen(nomeArquivo, "rb");
    if (f == NULL) {
        printf("Arquivo %s nao encontrado.\n", nomeArquivo);
        return;
    }

    Piada p;
    while (fread(&p, sizeof(Piada), 1, f) == 1) {
        No *novo = malloc(sizeof(No));
        novo->piada = p;
        novo->proximo = lista;
        lista = novo;
    }

    fclose(f);
}

void imprimirLista() {
    No *atual = lista;
    while (atual != NULL) {
        printf("id: %d | piada: %s\n", atual->piada.id, atual->piada.piada);
        atual = atual->proximo;
    }
}

void desalocarLista() {
    // percorrer a lista dando free cada No 
}

int main() {
    carregarPiadas("piadas.bin");
    imprimirLista();
    desalocarLista();
    return 0;
}
