#include <stdio.h>

void media(float a, float b, float *resultado) {
    *resultado = (a + b) / 2;
}

int main() {
    float a = 5, b = 7;
    float resultado;

    media(a, b, &resultado);
    printf("Resultado da média: %.2f\n", resultado);

    return 0;
}