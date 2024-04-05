/* Enunciado:
 *  Desenvolva um programa capaz de ler dois vetores com três elementos
 *  inteiros cada. A leitura deve ser feita em uma única linha para cada vetor,
 *  com os elementos separados por espaços. Após a leitura, o programa
 *  deve exibir o produto escalar entre os vetores digitados no formato
 *  exemplificado abaixo. O cálculo do produto escalar deve obrigatoriamente
 *  ser feito pela função produto_escalar, que recebe como referência os
 *  dois arrays e retorna um valor inteiro referente ao resultado do produto
 *  escalar.
 *
 *  Exemplos:
 *      Digite o primeiro array: 1 2 3
 *      Digite o segundo array: 3 2 1
 *      [1, 2, 3] . [3, 2, 1] = 10
 *
 *      Digite o primeiro array: 10 20 30
 *      Digite o segundo array: -10 2 5
 *      [10, 20, 30] . [-10, 2, 5] = 90
 *
 */

#include <math.h>
#include <stdio.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */
int produto_escalar(int array[], int array2[]);

int main(int argc, char *argv[]) {
  int vet1[ARRAY_MAX];
  int vet2[ARRAY_MAX];
  printf("Digite o primeiro array: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &vet1[i]);
  }
  printf("Digite o segundo array: ");
  for (int i = 0; i < ARRAY_MAX; i++) {
    scanf("%i", &vet2[i]);
  }
  printf("[");
  for (int i = 0; i < ARRAY_MAX; i++) {
    printf("%i, ", vet1[i]);
  }
  printf("] . [");
  for (int i = 0; i < ARRAY_MAX; i++) {
    printf("%i, ", vet2[i]);
  }
  printf("] = %i", produto_escalar(vet1, vet2));
}

int produto_escalar(int array[], int array2[]) {
  int produto = 0;
  for (int i = 0; i < ARRAY_MAX; i++) {
    produto += array[i] * array2[i];
  }
  return produto;
}
