#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "piadas.h"

typedef struct No {
    Piada piada;
    struct No *proximo;
} No;

No *lista = NULL;

void lerArquivo() {
    printf("Lendo piadas.bin...\n");
}

void salvarArquivo() {
    printf("Salvando piadas.bin...\n");
}

void loopOpcoes() {
    printf("Ler opcoes...\n");
}

int main() {
    lerArquivo();
    loopOpcoes();
    salvarArquivo();
    return 0;
}
