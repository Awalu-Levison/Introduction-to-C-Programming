#include <stdio.h>
int _strlen(char *str);

int _strlen(char *str)
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
int main()
{
	int count, len2;

	printf("Hello, world!%n", &count);
	printf("\nNumber of characters printed: %d\n", count);

	char *str = "Hello, World!";
	len2 = _strlen(str);

	printf("\nNumber of characters printed: %d\n", len2);
	return 0;
}
