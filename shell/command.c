#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that create a command prompt
 * and display the command input by the user
 * via the standard input
 * Return: 0 (Always success).
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
	}
	return (0);
}
