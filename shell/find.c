#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
/**
 * file_access - access system call in action
 *
 * Return: 0 success, -1 on failure
 */
void file_access(char *filename)
{
	if (access(filename, F_OK) == 0)
		printf("%s: File found\n", filename);
	else
	{
		printf("File not found\n");
	}
}


int main(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	char *token;
	ssize_t nread;

	while (1)
	{
		write(1, "cisfun$ ", 8);
		nread = getline(&buffer, &buffer_size, stdin);
		if (nread == -1)
		{
			free(buffer);
			/*perror("Error:");*/
			exit(EXIT_FAILURE);
		}
		token = strtok(buffer, " \t\n");

		if (strcmp(token, "which") == 0)
		{
			token = strtok(NULL, " \t\n");
			while (token)
			{
				file_access(token);
				token = strtok(NULL, " \t\n");
			}
		}

		else
		{
			write(1, "NOT FOUND\n", 10);
		}
	}
	return (0);
}
