#include <stdio.h>
#include <stdlib.h>

const char **environ;

int main(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s", environ[i]);
		i++;
	}
	return (0);
}
