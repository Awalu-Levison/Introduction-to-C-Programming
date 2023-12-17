#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that calculate average
 * of the given numbers via the arguments
 * @argc: Counting the arguments
 * @argv: The actual arguments passed
 * Return: Something
 */
int main(int ac, char **av)
{
	int sum = 0;

	printf("Number of args = %d\n", ac);
	printf("My content is %s\n", *av);

	for (int i = 1; i < ac; i++)
	{
		printf("argument [%d] = %s\n", i, av[i]);
		sum += atoi(av[i]);
	}
	printf("The sum is: %d\n", sum);
}
