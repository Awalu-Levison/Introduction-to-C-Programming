#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
/**
 * tokenize - A function that tokenize the given string
 * @command: The actual string given by the user
 * @delim: The delimiter used in tokenizing strings
 * Return: Array of tokens
 */

char **tokenize(char *command, char *delim)
{
	char **argv;
	char *copycommand = strdup(command);
	char *copycommand2 = strdup(command);
	int num_tokens = 0;

	char *token = strtok(copycommand, delim);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	argv = malloc((num_tokens + 1) * sizeof(char *));
	token = strtok(copycommand2, delim);
	int i = 0;

	while (token != NULL)
	{
		argv[i] = malloc((strlen(token) + 1) * sizeof(char *));
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
		i++;
	}

	argv[i] = NULL;
	free(copycommand);
	free(copycommand2);

	return (argv);
}

/**
 * main - Getline function in action
 * Return: 0 on success
 */
int main(void)
{
	while (1)
	{
		printf("$ ");
		char *command = NULL;
		size_t n = 0;
		int nread = 0;

		nread = getline(&command, &n, stdin);
		if (nread == -1)
		{
			free(command);
			exit(1);
		}
		printf("Your command is: %s", command);

		char **argv = tokenize(command, " \n\t");
		pid_t child_pid = fork();
		int status;

		if (child_pid == -1)
		{
			perror("Failed to run");
			exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
		{
			/*child_pid = getpid();*/
			/*printf("The id of child process is: %d\n", child_pid);*/
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		}
		else
		{
			/*free-arrays-of-tokens*/
			wait(&status);
			/*printf("The id of parent is %d\n", getpid());*/
			/*printf("The id of the terminated_child/wait is %d\n", terminated_child);*/
		}

		for (int i = 0; argv[i] != NULL; i++)
		{
			free(argv[i]);
		}
		free(argv);
	}
	return (0);
}
