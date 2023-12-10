#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
/**
 * main - wait() fork() execv() system calls
 * Return: 0 (Always success)
 */
int main(void)
{
	int j, i, count = 5;

	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		return (-1);
	}
	else
	{
			for (j = 0; j < count; j++)
			{
				char *argv[] = {"/tmp/ls", "-l", "/usr/", NULL};
				if (execve(argv[0], argv, NULL) == -1)
				{
					perror("Error:");
				}
			}
	}
	return (0);
}
