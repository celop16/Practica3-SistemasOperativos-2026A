#include <stdio.h>
#include <unistd.h>

int main ()
{
	printf ("Ejemplo de fork. \n");
	//El proceso original arranca desde aqui. getpid() obtiene su propio ID
	printf ("Inicio del proceso padre. PID=%d\n", getpid());

	if (fork() == 0)
	{
		printf ("Inicio proceso hijo. PID=%d, PPID=%d \n", getpid(), getppid());
		sleep (1);
	}
	else
	{
		printf("Continuacion del padre. PID=%d\n", getpid());
		sleep (1);
	}
	printf ("Fin del proceso %d\n", getpid());
	return 0;
}


