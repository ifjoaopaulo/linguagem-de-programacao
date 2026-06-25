#include <stdio.h>

void imprimirRegistros() {
    printf("Imprimindo registros...\n");
}

void inserirNovoRegistro() {
    printf("Inserindo novo registro...\n");
}

void loopOpcoes() {
    int opcao;

    do {
        printf("\nMenu Principal\n");
        printf("1. Imprimir Registros\n");
        printf("2. Inserir Novo Registro\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
              imprimirRegistros();   
              break;
            case 2: 
              inserirNovoRegistro(); 
              break;
            case 0: 
              printf("Saindo...\n"); 
              break;
            default: 
              printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

int main() {
    loopOpcoes();
    return 0;
}
