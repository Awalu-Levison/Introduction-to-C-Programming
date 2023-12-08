#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Getline function in action
 * Return: 0 on success
 */
int main(void)
{
	char *input = NULL;
	size_t length = 0;
	ssize_t nread;

	while (1)
	{
		printf("$ ");
		nread = getline(&input, &length, stdin);
		if (nread == -1)
		{
			printf("The program is closed\n");
			free(input);
			return (-1);
		}
		printf("Your input is : %s", input);
	}
	free(input);

	return (0);
}
