/*
 * Enunciado:
 * Desenvolva um programa capaz de ler n valores inteiros e os insira em um
 * array. A leitura deve ser feita de acordo com o programa feito no ex1.
 * Após a leitura, desenvolva a função calcula_media e calcula_dvp
 * para calcular a média e o desvio padrão dos valores informados.
 * O programa principal deve receber os valores lidos pelo array e retornar a
 * média e o desvio padrão no seguinte formato: MÉDIA +- DVP
 *
 * Exemplos:
 *    Digite os valores para o array: 1 2 3 4 5 6 7 -100
 *    4.00 +- 2.0
 *
 *    Digite os valores para o array: 1 1 1 1 1 1 1 1 1 1 1 -100
 *    1.00 +- 0.0
 *
 *    Digite os valores para o array: 10 20 1 40 50 90 100 -100
 *    44.43 +- 35.6
 *
 */

#include <math.h> // A biblioteca math tem pow e sqrt
#include <stdio.h>

#define ARRAY_MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */
float calcula_media(int array[], int tam_array);
float calcula_dvp(int array[], int tam_array);

int main(int argc, char *argv[]) {
  printf("Digite os valores para o array: ");
  int array[ARRAY_MAX];
  int tam_array = 0;
  int valor;
  while (tam_array < ARRAY_MAX && scanf("%i", &valor) && valor != -100) {
    array[tam_array] = valor;
    tam_array++;
  }
  float media = calcula_media(array, tam_array);
  float dvp = calcula_dvp(array, tam_array);
  printf("%.2f +- %.1f", media, dvp);
  return 0;
}

float calcula_media(int array[], int tam_array) {
  int s = 0;
  for (int i = 0; i < tam_array; i++) {
    s += array[i];
  }
  return s / tam_array;
}

float calcula_dvp(int array[], int tam_array) {
  float m = calcula_media(array, tam_array);
  float s = 0;
  for (int i = 0; i < tam_array; i++) {
    s += pow(array[i] - m, 2);
  }
  return sqrt(s / tam_array);
}
