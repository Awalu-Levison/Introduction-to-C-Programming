#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Fork in action
 * Return: PIDs of processes
 */
int main(void)
{
	pid_t i, j;

	i = fork();
	if (i == -1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	if (i == 0)
		printf("Child is: %u\n", i);
	j = getpid();
	else
	{
		printf("Parent ID: %u\n", j);
	}

	return (0);
}
