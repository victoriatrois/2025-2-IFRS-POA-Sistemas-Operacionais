#include <stdio.h>
#include <math.h>

double soma_massiva(long long limite) {
  double soma = 0.0;

  for (long long i = 1; i <= limite; i++) {
    soma += sqrt(i) / (i + 1.0); // operação mais pesada que apenas somar
  }

  return soma;
}

double aproximar_pi(long long iteracoes) {
  double pi = 0.0;

  for (long long i = 0; i < iteracoes; i++) {
    double termo;

    if (i % 2 == 0) {
      termo = 1.0 / (2.0 * i + 1.0);
    } else {
        termo = -1.0 / (2.0 * i + 1.0);
    }

    pi += termo;
  }

  return pi * 4.0;
}

int main() {
  // TODO: criar duas threads

  // TODO: armazenar a execução da soma massiva numa thread
  // TODO: armazenar a execução da aproximação de PI na outra thread

  long long n1 = 5000000000;
  long long n2 = 10000000000;

  printf("Iniciando o Procesos de calculos massivos Sequencial...\n");

  printf("Calculos Soma massivos ...\n"); // inicia a soma massiva
  double resultado1 = soma_massiva(n1);
  printf("Resultado da soma massiva: %.6f\n", resultado1); // finaliza a soma massiva

  printf("Calculos aproxima��o do Pi ...\n"); // inicia o cálculo de PI
  double resultado2 = aproximar_pi(n2);
  printf("Aproxima��o de Pi: %.12f\n", resultado2); // finaliza o cálculo de PI

  printf("Calculos finalizados.\n");

  return 0;
}