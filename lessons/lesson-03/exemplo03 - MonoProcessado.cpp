#include <stdio.h>  
#include <pthread.h>  
#include <unistd.h> 
#include <stdlib.h>
#include <time.h>

int main ( ) 
{   
	int a=0, b=0;
	printf("Inciando do programa sem Threads. Contanto 10 x ate 20.000.000 \n");
	for (a = 0; a<10; a++)
		{
			printf(">> Executando o Laco Nro %d \n", a+1);
			
			//Pega o Id do FOR para o SRAND * 2000
			int id = a *2000;
			
			//Definindo a Semente Inicial do Gerador Aleatório
			srand(((unsigned) time(NULL)) + id) ; 
						
			for (b=0; b< 20000000; b++)
			{
				//Geração de Numero aleatório entre 1 até 100.000
				float c = rand_r(&id);
				
				//Para mostrar os Valores Gerados. 
				//printf ("\n%.0f", c); 
			}
			printf("\n>>>>> Laco %d Finalizou agora 20.000.000 de operacoes\n\n", a+1);
		}
	return 0;   
}
