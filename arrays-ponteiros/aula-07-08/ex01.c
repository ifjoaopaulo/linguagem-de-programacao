#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int temp = 0;
    int* pa = &a;
    int* pb = &b;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    /*
    Como fazer sem a variável temporária:

    *pa = *pb - *pa;
    *pb = *pa;
    *pa = *pa + *pa;
    */

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}