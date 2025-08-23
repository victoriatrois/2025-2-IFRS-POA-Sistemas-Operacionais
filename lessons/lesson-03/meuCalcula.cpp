#include <stdio.h>
#include <math.h>
#include <pthread.h> // importei a biblio para threads

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

void *soma_massiva_pthread(void *arg) { soma_massiva(*(long long *)arg); return NULL; }
void *aproximar_pi_pthread(void *arg) { aproximar_pi(*(long long *)arg); return NULL; }

int main() {
  long long n1 = 5000000000;
  long long n2 = 10000000000;

  pthread_t thread1, thread2;

  // printf("Iniciando o Procesos de calculos massivos Sequencial...\n");
  printf("Iniciando os Procesos de calculos massivos e aproximação de Pi de forma paralela...\n");

  printf("Calculos Soma massivos ...\n");
  pthread_create(&thread1, NULL, soma_massiva_pthread, &n1);

  printf("Calculos aproximação do Pi ...\n");
  pthread_create(&thread2, NULL, aproximar_pi_pthread, &n2);

  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  printf("Calculos finalizados.\n");

  return 0;
}
