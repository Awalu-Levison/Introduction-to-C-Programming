#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
/**
 * main - Super simple shell exercise
 *
 * Return: 0 Upon success
 */
int main(void)
{
	size_t buffer_size = 0;
	char *buffer = NULL;
	char *token;
	int status, i = 0;
	pid_t child_pid;
	char **array;
	ssize_t nread;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		nread = getline(&buffer, &buffer_size, stdin);
		if (nread == -1)
		{
			free(buffer);
			perror("Error:");
			exit(EXIT_FAILURE);
		}

		token = strtok(buffer, "\t\n");
		array = malloc(sizeof(char *) * 1024);

		while (token)
		{
			array[i] = token;
			token = strtok(NULL, "\t\n");
			i++;
		}

		array[i] = NULL;
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error:");
			exit(EXIT_FAILURE);
		}

		if (child_pid == 0)
		{
			if (execve(array[0], array, NULL) == -1)
				perror("Failed Execution");
		}

		else
		{
			wait(&status);
		}
		i = 0;
		free(array);
	}

	return (0);
}
