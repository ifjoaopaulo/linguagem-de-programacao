#include <stdio.h>

void incrementa() {
    static int contador = 0;

    contador++;
    printf("Contador: %d\n", contador);
}

int main() {
    incrementa();
    incrementa();
    incrementa();

    return 0;
}