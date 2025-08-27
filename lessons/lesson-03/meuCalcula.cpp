#include <stdio.h>
#include <math.h>
#include <pthread.h> // importei a biblio para threads

typedef struct {
  long long limite;
  long long iterações;
  double resultadoDaSoma;
  double resultadoDaAproximacaoDePi;
} IngredientesParaOperações; // para dizer que é uma struct, usamos PascalCase

// double soma_massiva(long long limite) {
//   double soma = 0.0;

//   for (long long i = 1; i <= limite; i++) {
//     soma += sqrt(i) / (i + 1.0); // operação mais pesada que apenas somar
//   }

//   return soma;
// }

// para trabalhar com threads precisamos passar por parâmetro um endereço de memória
// nesse caso o da struct que terá o valor da variável para determinar a soma
void* soma_massivamente_com_thread(void* arg) { // long long limite => void* arg
  IngredientesParaOperações* argumentos = (IngredientesParaOperações*)arg;
  double soma = 0.0;

  for (long long i = 1; i <= argumentos->limite; i++) {
    soma += sqrt(i) / (i + 1.0); // operação mais pesada que apenas somar
  }

  argumentos->resultadoDaSoma = soma;

  return NULL;
}

// double aproximar_pi(long long iteracoes) {
//   double pi = 0.0;

//   for (long long i = 0; i < iteracoes; i++) {
//     double termo;

//     if (i % 2 == 0) {
//       termo = 1.0 / (2.0 * i + 1.0);
//     } else {
//       termo = -1.0 / (2.0 * i + 1.0);
//     }

//     pi += termo;
//   }

//   return pi * 4.0;
// }

void* aproxima_pi_com_thread(void* arg) {
  IngredientesParaOperações* argumentos = (IngredientesParaOperações*)arg;
  double pi = 0.0;

  for (long long i = 0; i < argumentos->iterações; i++) {
    double termo;

    if (i % 2 == 0) {
      termo = 1.0 / (2.0 * i + 1.0);
    } else {
      termo = -1.0 / (2.0 * i + 1.0);
    }

    pi += termo;
  }
  argumentos->resultadoDaAproximacaoDePi = pi;

  return NULL;
}

// void *soma_massiva_pthread(void *arg) { soma_massiva(*(long long *)arg); return NULL; }
// void *aproximar_pi_pthread(void *arg) { aproximar_pi(*(long long *)arg); return NULL; }

int main() {
  long long numeroParaSomarMassivamente = 5000000000;
  long long numeroParaProximarDePi = 10000000000;

  pthread_t threadParaSomaMassiva, threadParaAproximarDePi;
  IngredientesParaOperações argumentos;
  argumentos.limite = numeroParaSomarMassivamente;
  argumentos.iterações = numeroParaProximarDePi;

  // printf("Iniciando o Procesos de calculos massivos Sequencial...\n");
  printf("Iniciando os Procesos de calculos massivos e aproximação de Pi de forma paralela...\n");

  printf("Calculos Soma massivos...\n");
  pthread_create(&threadParaSomaMassiva, NULL, soma_massivamente_com_thread, (void*)&argumentos);

  printf("Calculos aproximação do Pi...\n");
  pthread_create(&threadParaAproximarDePi, NULL, aproxima_pi_com_thread, (void*)&argumentos);

  pthread_join(threadParaSomaMassiva, NULL);
  pthread_join(threadParaAproximarDePi, NULL);

  printf("Resultado da soma massiva: %.6f\n", argumentos.resultadoDaSoma);
  printf("Resultado da aproximação de Pi: %.12f\n", argumentos.resultadoDaAproximacaoDePi);

  printf("Calculos finalizados.\n");

  return 0;
}
