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
	char s[] = "Do hard things";
	print_token(s, " ");

	char a[] = "Do hard things!";
	print_token(a, ",");

	char b[] = "ABC";
	print_token(b, "ABC");

	char d[] = "      ";
	print_token(d, " , ");

	char e[] = "abc             hard           ";
	print_token(e, "   ");

	return (0);
}
