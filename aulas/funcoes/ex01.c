#include <stdio.h>

void trocar(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    trocar(&num1, &num2);
    printf("A: %d B: %d\n", num1, num2);

    return 0;
}