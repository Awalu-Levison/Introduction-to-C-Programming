#include <stdio.h>
#include <string.h>
/**
 * main - Tokenizing strings
 * @argc: Number of arguments
 * @argv: The actual arguments passed to the function
 * Return: 0 upon success
 */ 
int main()
{
	char str[] = "Hello,World,This,is,Tokenization";
	char *token = strtok(str, ",");

	while (token != NULL)
       {
	       printf("%s\n", token);
	       token = strtok(NULL, ",");
       }
	return 0;
}
