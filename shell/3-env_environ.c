#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	printf("Address of env is: %p\n Address of environ is: %p\n", env, environ);

	return (0);
}
