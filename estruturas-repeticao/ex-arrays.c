#include <stdio.h>

// Exercícios de fixação sobre arrays unidimensionais passados durante a aula

int main() {
    int n;
    int v[n];
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Informe o valor para a posição %d\n", i);
        scanf("%d", &v[i]);
    }

    // 1. Imprime todos os itens do array do começo ao fim
    // for (int i = 0; i < n; i++) {
    //     printf("Posição %d: %d\n", i, v[i]);
    // }


    // 2. Imprime todos os itens do array do fim ao começo (Ordem inversa do anterior)
    // for (int i = n - 1; i >= 0; i--) {
    //     printf("Posição %d: %d\n", i, v[i]);
    // }


    // 3. A partir do array do ex. 1, cria um segundo array com os valores do 1 em ordem crescente
    int ordemCrescente[n];
    int aux;

    for (int i = 0; i < n; i++) {
        ordemCrescente[i] = v[i];
    }

    for (int i = 0; i < n; i++) {
        if (ordemCrescente[i] > ordemCrescente[i + 1]) {
            aux = ordemCrescente[i];
            ordemCrescente[i] = ordemCrescente[i + 1];
            ordemCrescente[i + 1] = aux;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", ordemCrescente[i]);
    }

    // 5. Pede um número ao usuário, checa se está no array da questão 1 e então exibe a posição deste valor
    // int busca;
    // printf("Informe o valor que deseja buscar: ");
    // scanf("%d", &busca);

    // for (int i = 0; i < n; i++) {
    //     if (busca == v[i]) {
    //         printf("Posição de %d: %d\n", busca, i);
    //     }
    // }

    return 0;
}