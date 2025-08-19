#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

void * funcao_01(void *)
{
			printf(">> Executando o Laco Nro 01 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 01 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_02(void *)
{
			printf(">> Executando o Laco Nro 02 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 02 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_03(void *)
{
			printf(">> Executando o Laco Nro 03 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 03 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_04(void *)
{
			printf(">> Executando o Laco Nro 04 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 04 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_05(void *)
{
			printf(">> Executando o Laco Nro 05 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 05 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_06(void *)
{
			printf(">> Executando o Laco Nro 06 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 06 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_07(void *)
{
			printf(">> Executando o Laco Nro 07 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 07 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_08(void *)
{
			printf(">> Executando o Laco Nro 08 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 08 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_09(void *)
{
			printf(">> Executando o Laco Nro 09 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 09 Finalizou agora 200.000.000 de operacoes\n\n");
}

void * funcao_10(void *)
{
			printf(">> Executando o Laco Nro 10 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 10 Finalizou agora 200.000.000 de operacoes\n\n");
}



int main ( )
{
	int a=0, b=0;
	pthread_t f1, f2, f3, f4,f5, f6, f7, f8, f9, f10;

	printf("Inciando do programa sem Threads. Contanto 10 x ate 200.000.000 \n");

		pthread_create(&f1,NULL,funcao_01, NULL);
		pthread_create(&f2,NULL,funcao_02, NULL);
		pthread_create(&f3,NULL,funcao_03, NULL);
		pthread_create(&f4,NULL,funcao_04, NULL);
		pthread_create(&f5,NULL,funcao_05, NULL);
		pthread_create(&f6,NULL,funcao_06, NULL);
		pthread_create(&f7,NULL,funcao_07, NULL);
		pthread_create(&f8,NULL,funcao_08, NULL);
		pthread_create(&f9,NULL,funcao_09, NULL);
		pthread_create(&f10,NULL,funcao_10, NULL);

	pthread_join(f1, NULL);
	pthread_join(f2, NULL);
	pthread_join(f3, NULL);
	pthread_join(f4, NULL);
	pthread_join(f5, NULL);
	pthread_join(f6, NULL);
	pthread_join(f7, NULL);
	pthread_join(f8, NULL);
	pthread_join(f9, NULL);
	pthread_join(f10, NULL);


	return 0;
}
