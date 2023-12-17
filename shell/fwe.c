#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

/**
 * main - Fork, wait and execve function
 *
 * Return: Different processes of a program
 */
int main(void)
{
	char *args[] = {"/bin/ls", "-al", NULL};
	pid_t child_pid;
	int status;
	int i;

	for (i = 1; i <= 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			execve(args[0], args, NULL);
			perror("Error:");
			exit(1);
		}
		else
		{
			/*parents*/
			wait(&status);
		}
	}
	return (0);
}
