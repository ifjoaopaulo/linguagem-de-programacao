#include <stdio.h>
#include <stdlib.h>

struct Aluno {
  char nome[50];
  int idade;
  float nota;
};

int main() {
  struct Aluno *a1 = (struct Aluno*) malloc(sizeof(struct Aluno));

  if (a1 == NULL) {
    fprintf(stderr, "Erro ao alocar a memória!\n");
    return 1;
  }

  snprintf(a1->nome, sizeof(a1->nome), "Carlos");
  a1->idade = 20;
  a1->nota = 8.5;

  printf("Nome: %s\n", a1->nome);
  printf("Idade: %d\n", a1->idade);
  printf("Nota: %.2f\n", a1->nota);

  free(a1);
  return 0;
}
