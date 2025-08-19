#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int funcao_01()
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

int funcao_02()
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

int funcao_03()
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

int funcao_04()
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

int funcao_05()
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

int funcao_06()
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

int funcao_07()
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

int funcao_08()
{
			printf(">> Executando o Laco Nro 08 \n");

			unsigned int id = 1 *2000;
			srand(((unsigned) time(NULL)) + id) ;

			for (int b=0; b< 200000000; b++)
			{
				//Gera��o de Numero aleat�rio entre 1 at� 100.000
				float c = rand_r(&id) % 100000;
		}
		printf(">>>>> Laco 08Finalizou agora 200.000.000 de operacoes\n\n");
}

int funcao_09()
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

int funcao_10()
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

	printf("Inciando do programa sem Threads. Contanto 10 x ate 200.000.000 \n");

	funcao_01();
	funcao_02();
	funcao_03();
	funcao_04();
	funcao_05();
	funcao_06();
	funcao_07();
	funcao_08();
	funcao_09();
	funcao_10();

	return 0;
}
