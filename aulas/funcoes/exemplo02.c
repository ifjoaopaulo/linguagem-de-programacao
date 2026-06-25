#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void inicializar_array(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    srand(time(NULL));

    int tamanho = 10;
    int arr[tamanho];

    inicializar_array(arr, tamanho);

    printf("Array inicializado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}