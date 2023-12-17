#include <unistd.h>
#include <stdio.h>
/**
 * main - Fork function
 * Return: PIDs of the processes
 */
int main(void)
{
	fork();
	fork();
	fork();

	printf("%u This is my PID\n", getpid());

	return (0);
}
