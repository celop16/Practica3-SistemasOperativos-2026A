#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main () {
	pid_t pid = fork(); //Crea proceso hijo
	if (pid < 0) {
		fprintf(stderr, "Error al crear el proceso \n");
		return 1;
	}
	else if (pid == 0) {
		printf("\nSoy el proceso hijo (PID: %d). Listando proceso del sistema:\n", getpid());
		printf("---------------------------------------------------------------\n");

		system("ps aux");
		printf("---------------------------------------------------------------\n");
	}
	else {
		wait(NULL);
		printf("Soy el proceso padre (PID: %d). Mi hijo termino de listar los procesos\n", getpid());
	}
	return 0;
}
