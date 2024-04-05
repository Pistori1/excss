/* Enunciado:
 * Desenvolva um programa capaz de ler os valores inteiros de duas matriz 3x3
 * e, a seguir, exiba a matriz resultante da multiplicação entre elas.
 *
 * Exemplos:
 *
 *    Digite a linha 0: 1 0 0
 *    Digite a linha 1: 0 1 0
 *    Digite a linha 2: 0 0 1
 *    Digite a linha 0: 1 1 1
 *    Digite a linha 1: 2 2 2
 *    Digite a linha 2: 3 3 3
 *    [[1, 1, 1],
 *    [2, 2, 2],
 *    [3, 3, 3]]
 *
 *    Digite a linha 0: 1 2 3
 *    Digite a linha 1: 4 5 6
 *    Digite a linha 2: 7 8 9
 *    Digite a linha 0: 1 1 1
 *    Digite a linha 1: 2 2 2
 *    Digite a linha 2: 3 3 3
 *    [[14, 14, 14],
 *    [32, 32, 32],
 *    [50, 50, 50]]
 *
 *    Digite a linha 0: 2 0 0
 *    Digite a linha 1: 0 2 0
 *    Digite a linha 2: 0 0 2
 *    Digite a linha 0: 1 1 1
 *    Digite a linha 1: 2 2 2
 *    Digite a linha 2: 3 3 3
 *    [[2, 2, 2],
 *    [4, 4, 4],
 *    [6, 6, 6]]
 *
 */

#include <stdio.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

int main(int argc, char *argv[]) {
  // matriz 1
  int matriz1[ARRAY_MAX][ARRAY_MAX];
  printf("Digite a linha 0: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz1[0][i]);
  }
  printf("Digite a linha 1: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz1[1][i]);
  }
  printf("Digite a linha 2: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz1[2][i]);
  }

  // matriz 2
  int matriz2[ARRAY_MAX][ARRAY_MAX];
  printf("Digite a linha 0: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz2[0][i]);
  }
  printf("Digite a linha 1: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz2[1][i]);
  }
  printf("Digite a linha 2: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz2[2][i]);
  }

  // matriz resultante
  int matriz_resultante[ARRAY_MAX][ARRAY_MAX];
  for (int i = 0; i < ARRAY_MAX; i++) {
    for (int j = 0; j < ARRAY_MAX; j++) {
      matriz_resultante[i][j] = 0;
      for (int k = 0; k < ARRAY_MAX; k++) {
        matriz_resultante[i][j] += matriz1[i][k] * matriz2[k][j];
      }
    }
  }
  printf("[");
  for (int i = 0; i < ARRAY_MAX; i++) {
    printf("[");
    for (int j = 0; j < ARRAY_MAX; j++) {
      printf("%i", matriz_resultante[i][j]);
      if (j < ARRAY_MAX - 1) {
        printf(", ");
      }
    }
    printf("]");
    if (i < ARRAY_MAX - 1) {
      printf(",\n ");
    }
  }
  printf("]");
  return 0;
}
