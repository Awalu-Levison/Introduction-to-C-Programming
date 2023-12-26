#include <unistd.h>
#include <stdio.h>

int main(void)
{
	if (isatty(STDOUT_FILENO))
	{
		printf("Running in interactive terminal\n");
	}
	else
	{
		printf("Not in terminal\n");
	}

	return (0);
}
