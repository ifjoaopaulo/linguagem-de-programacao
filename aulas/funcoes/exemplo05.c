#include <stdio.h>

void exibir_string(char* str) {
    printf("String: %s\n", str);
}

int main() {
    char* minha_string = "Olá, Mundo!";
    exibir_string(minha_string);

    return 0;
}