#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int v[n];
    printf("sizeof(v) = %d | sizeof(int) %d \n",
    sizeof(v), sizeof(int));
    printf("Tamanho de v = %d \n",
    sizeof(v) / sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("v[%d] = %d \n", i, v[i]);
    }

    return 0;
}