#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{

	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("error:");
		return (1);
	}

	if (child_pid == 0)
	{
		printf("wait for me, wait for me\n");
		sleep(3);
	}

	else
	{
		wait(&status);
		printf("Oh! Its all better now\n");
	}
	return (0);
}
