#include <stdio.h>

int main() {
  float notas[10];
  /* leitura */
  printf("Digite as notas dos 10 alunos:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%f", &notas[i]);
  }
  /* inverte o vetor */
  float temp;
  for (int i = 0; i < 5; i++) {
    temp = notas[i];
    notas[i] = notas[9 - i];
    notas[9 - i] = temp;
  }

  /* impressão */
  for(int i = 0; i < 10; i++ ) {
    printf("nota do aluno %d - %.1f\n", i, notas[i] );
  }
}