#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * t_print - Tokenizing the strings
 * @my_str: The string to be passed by the user
 * @del: The string delimiter
 * Return: Array of tokens
 */
char *t_print(char *my_str, char *del)
{
	/*char token[] = "This is Engineer Levison from ALX";*/

	char *token = strtok(my_str, del);
	while (token != NULL)
	{
		printf("%s", my_str);
		token = strtok(NULL, del);
	}
	printf("=====Finished=====\n");

	return (token);
}

/**
 * main = General testing
 * Return: 0 (Always success).
 */
int main(void)
{
	char str1[] = "This is Engineer Levison from ALX";
	char *token1 = strtok(str1, " ");

	printf("Token is: %s\n", str1);

	return (0);
}
