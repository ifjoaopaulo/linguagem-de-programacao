#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int* p = v;

    for (int i = 4; i >= 0; i--) {
        printf("v[%d]: %d\n", i, *(p + i));
    }

    return 0;
}