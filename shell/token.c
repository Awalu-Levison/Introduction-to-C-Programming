#include <stdio.h>
#include <string.h>
/**
 * main - Tokenize string passed to the function
 * by the user
 * @argc: The number of arguments passed to the function
 * @argv: The actual arguments input by user
 * Return: Tokens of string
 */
int main(int argc, char **argv)
{
	char str[] = " Hello, World, This, is, Mr, Awalu, The Software_Engineer";
	char *token = strtok(str, ",");
	int token_count = 0;

	printf("Tokens of the string are :\n");
	printf("=================================================\n");
	while (token != NULL)
	{
		printf("#%s\n", token);
		token = strtok(NULL, ",");
		token_count++;
	}
	printf("The number of token is : %d\n", token_count);
	return (0);
}
