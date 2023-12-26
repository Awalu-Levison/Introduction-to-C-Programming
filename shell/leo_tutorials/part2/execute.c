#include "shell.h"
/**
 * command_execute - Function that execute other process
 *
 * @message: Command given by the user
 * Return: void
 */
void command_execute(const char *message)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(message, message, (char *)NULL);
		perror("execlp");
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(NULL);
	}
}
