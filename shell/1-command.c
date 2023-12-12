#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * tokenize - Making tokens of a given string
 * @command: String given by user
 * @delim: The delimiter used to tokenize strings
 * Return: Array of string
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
		argv[i] = malloc(strlen(token + 1));
		strcpy(argv[i], token);
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
		printf("$ Enter Your command\n");
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
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
		}

		for (int i = 0; argv[i] != NULL; i++)
		{
			free(argv[i]);
		}
		free(argv);
	}

	return (0);
}
