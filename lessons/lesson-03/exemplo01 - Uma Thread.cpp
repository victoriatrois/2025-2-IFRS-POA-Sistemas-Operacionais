#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


void *HelloThread (void *argumentos)
{
	pthread_t NumThread;
	NumThread = pthread_self();
	for (int i = 0; i<10; i++)
	{
		printf("\n Ola Mundo! Eu sou a thread n# %d", NumThread);
		sleep(1);

	}
	pthread_exit(NULL);
}


int main ( )
{
	pthread_t thread;
	int flag, i;
	printf("Inciando do programa de Threads. ");
	flag = pthread_create(&thread, NULL, HelloThread, NULL);
		if (flag!=0) printf("Erro na cria��o de thread\n");

	pthread_exit(NULL);
	return 0;
}
