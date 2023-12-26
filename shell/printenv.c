#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print environment variables
 *
 * Return: 0
 */
int main(void)
{
	const char *my_list = "My environment list";

	my_list = getenv(my_list);
	if (my_list != NULL)
	{
		printf("My_list is: %s\n", my_list);
		free(my_list);
	}
	else
	{
		printf("List not found\n");
	}

	return (0);
}
