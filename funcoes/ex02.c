#include <stdio.h>

void preencher(int *v, int n) {
    for (int i = 0; i < n; i++) {
        *(v + i) = i * 5;
    }
}

int main() {
    int tamanho = 5;
    int arr[tamanho];

    preencher(arr, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}