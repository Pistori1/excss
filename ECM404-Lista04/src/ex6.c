/* Enunciado:
 * Desenvolva um programa capaz de ler os valores inteiros de uma matriz 3x3
 * e, a seguir, exiba a sua forma transposta
 *
 * Exemplos:
 *
 *
 *    Digite a linha 0: 1 2 3
 *    Digite a linha 1: 4 5 6
 *    Digite a linha 2: 7 8 9
 *    [[1, 4, 7],
 *    [2, 5, 8],
 *    [3, 6, 9]]
 *
 *    Digite a linha 0: 1 0 0
 *    Digite a linha 1: 0 1 0
 *    Digite a linha 2: 0 0 1
 *    [[1, 0, 0],
 *    [0, 1, 0],
 *    [0, 0, 1]]
 *
 */

#include <stdio.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

int main(int argc, char *argv[]) {
  int matriz[ARRAY_MAX][ARRAY_MAX];
  printf("Digite a linha 0: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz[0][i]);
  }
  printf("Digite a linha 1: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz[1][i]);
  }
  printf("Digite a linha 2: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &matriz[2][i]);
  }
  printf("[");
  for (int i = 0; i < ARRAY_MAX; i++) {
    printf("[");
    for (int j = 0; j < ARRAY_MAX; j++) {
      printf("%i", matriz[j][i]);
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
