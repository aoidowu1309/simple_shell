#include "shell.h"
/**
 * main - exercise: fork + wait + execve
 * Return: Always 0
 */
int _fork_wait_execve(void)
{
	pid_t my_pid;
	pid_t child_pid = 1;
	int i = 0;
	int status;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};

	my_pid = getpid();
	while (i <= 4 && (child_pid != 0))
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("error");
			return (1);
		}
		wait(&status);
		i++;
	}
	if (child_pid == 0)
	{
		printf("--------------------------------\n\n");
		printf("ID HIJO: %u\n\nID PADRE: %u\n\n", getpid(), getppid());
		printf("--------------------------------\n\n");
	}
	else
	{
		printf("%u SOY EL PADRE Y MI ID ES: %u\n", my_pid, child_pid);
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
		/*perror("ERROR:");*/
	}
	return (0);
}
