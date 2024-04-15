#include <stdio.h>

int main(void) {
  float notas[10];
  /* leitura */
  printf("Digite as notas dos 10 alunos:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%f", &notas[i]);
  }
  /* cálculo da média */
  float soma = 0;
  for (int i = 0; i < 10; i++) {
    soma = soma + notas[i];
  }
  float media = soma / 10;

  /* encontra a maior nota */
  float maior_nota = notas[0];
  for (int i = 1; i < 10; i++) {
    if (notas[i] > maior_nota) {
      maior_nota = notas[i];
    }
  }
  printf("A maior nota da turma é %.1f\n", maior_nota);

  /* impressão */
  for(int i = 0; i < 10; i++ ) {
    printf("nota do aluno %d - %.1f\n", i, notas[i] );
  }
  printf("A média da turma é %.1f\n", media);  
  return 0;
}