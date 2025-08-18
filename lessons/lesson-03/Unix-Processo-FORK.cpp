#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    int i;
    pid_t pid;

    if ((pid = fork()) < 0)
    {
        perror("Erro na Cria��o do fork");
        exit(1);
    }
    if (pid == 0)
    {
        //O c�digo no processo filho
        int x = 0; 
        while (x< 100)
        {
			printf("-PID do Filho: %d - Execu��o: %d\n", getpid(),x) ;
			x++; 
			sleep(1);
		}
    }
    else
    {
        //O c�digo no processo pai
        int x = 0; 
        while (x< 100)
        {
			printf("+PID do Pai: %d - Execucao: %d\n", getpid(),x);
        	x++; 
			sleep(2);
		}
	}

    printf("Processos Finalizados - Area comum aos processos. \n Digite um valor e Pressione enter:");
    scanf("Voce Digitou %d", &i);
    exit(0);
}

