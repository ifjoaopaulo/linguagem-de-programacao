#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerar_inteiro_aleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(NULL));

    int aleatorio = gerar_inteiro_aleatorio(1, 100);
    printf("Número aleatório: %d\n", aleatorio);

    return 0;
}