#include <stdio.h>
#include <math.h>
#include <pthread.h>

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
  long long n1 = 5000000000;
  long long n2 = 10000000000;

  // declarar variáveis para as threads
  pthread_t thread1, thread2;

  // TODO: criar uma thread para a execução da soma massiva
  pthread_create(&thread1, NULL, (void *(*)(void *))soma_massiva, (void *)&n1);

  // TODO: criar uma thread para a execução da aproximação de PI na outra thread
  pthread_create(&thread2, NULL, (void *(*)(void *))aproximar_pi, (void *)&n2);

  // TODO: executar as threads em paralelo
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  pthread_exit(NULL); // se usei o pthread_join, no fim da main uso return 0 ou pthread_exit?
}