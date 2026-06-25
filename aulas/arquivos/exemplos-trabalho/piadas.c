#include <stdio.h>
#include <string.h>
#include "piadas.h"

int lerPiadas(char *nomeArquivo) {
    FILE *f = fopen(nomeArquivo, "rb");
    if (f == NULL) {
        printf("Arquivo %s nao encontrado.\n", nomeArquivo);
        return 0;
    }

    int total = 0;
    Piada p;
    while (fread(&p, sizeof(Piada), 1, f) == 1) {
        printf("id: %d | piada: %s\n", p.id, p.piada);
        total++;
    }

    fclose(f);
    return total;
}

void escreverPiada(char *nomeArquivo, int total) {
    Piada nova;
    nova.id = total + 1;
    snprintf(nova.piada, sizeof(nova.piada), "Bla Bla Bla %d", nova.id);

    FILE *f = fopen(nomeArquivo, "ab");
    fwrite(&nova, sizeof(Piada), 1, f);
    fclose(f);

    printf("Piada escrita: id=%d | %s\n", nova.id, nova.piada);
}

int main() {
    char *arquivo = "piadas.bin";

    int total = lerPiadas(arquivo);
    escreverPiada(arquivo, total);

    return 0;
}
