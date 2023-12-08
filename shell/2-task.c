#include <string.h>
#include <stdio.h>
void print_token(char *str, char *delimitor);
/**
 * print_token - Printing the tokens of a string
 * @str: The actual string passed to the function
 * @delimitor: The tokenizing delimitor
 * Return: Nothing
 */
void print_token(char *str, char *delimitor)
{
	char *token = strtok(str, delimitor);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delimitor);
	}
	printf("Finished\n");
}
/**
 * main - Displys the tokens  of a string
 * Return: 0 upon succesion
 */
int main(void)
{
	int i = 0;
	char *b;
	printf("Enter string to tokenize\n");
	scanf("%s", &b);
	while (b[i] != '\0');
	{
		print_token(b, " ");
		i++;
	}

	return (0);
}
