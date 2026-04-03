#include <stdio.h>

int main() {
    float numero1, numero2;
    char operador;

    printf("Insira o primeiro número: ");
    scanf("%f", &numero1);

    printf("Insira o segundo número: ");
    scanf("%f", &numero2);

    printf("Escolha uma operação: ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            int resultado = numero1 + numero2;
            printf("Resultado: %d\n", resultado);
            break;
        
        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %d\n", resultado);
            break;
        
        case '*':
            resultado = numero1 * numero2;
            printf("Resultado: %d\n", resultado);
            break;
        
        case '/':
            if (numero2) {
            resultado = numero1 / numero2;
            printf("Resultado: %d\n", resultado);
            } else {
                printf("Divisão por zero!\n");
            };
            break;
        
        default:
            printf("Operação inválida!\n");
    };

    return 0;
}