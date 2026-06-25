#include <stdio.h>

#define N 3

int main() {
    int v[N];
    int* p = v;
    for (int i = 0; i < N; i++) {
        *(p + i) = i * 128;
    }
    
    for (int i = 0; i < N; i++) {
        printf("v[%d]: %d\n", i, *(p + i));
    }

    char* pc;
    for (int i = 0; i < N; i++) {
        pc = (char*) (p + i);
        printf("Primeiro byte de v[%d]: %d\n", i, *pc & 0xFF);
    }

    return 0;
}