#include <stdio.h>

int incrementa_soma(int *a, int *b) {
    (*a)++;
    (*b)++;
    return *a + *b;
}

int main() {
    int x = 5, y = 10;
    int resultado = incrementa_soma(&x, &y);
    printf("Resultado: %d\n", resultado);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}