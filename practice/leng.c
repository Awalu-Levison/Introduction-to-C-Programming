#include <stdio.h>
int string_len(char *my_str);
/**
 * ..............
 * .........
 */
int string_len(char *my_str)
{
	int length = 0;

	while (*my_str != '\0')
	{
		length++;
		my_str++;
	}
	return (length);

	return (0);
}
int main(void)
{
	char str1[] = "This is my country and is the warm heart of Africa";
	
	int len1 = string_len(str1);
	printf("String 1 is: => %s\n", str1);
	printf("Length of str1 is: %d\n", len1);

	char str2[] = "Hello, AWalu Levison";
	int len2 = string_len(str2);
	printf("String 2 is: => %s\n", str2);
	printf("Length of str 2 is: %d\n", len2);

	return (0);
}
