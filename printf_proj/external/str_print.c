#include "main.h"
/**
 * str_print - Print the string
 * @mylist: String passed to the function
 * @mystr: String passed to the function
 * Return: Number of printed chars
 */
int str_print(char *mystr)
{
	unsigned int j, i = 0;

	if (mystr == NULL)
		return (-1);

	else
	{
		j = write(1, mystr, len_str(mystr));
		i += j;
	}
	return (i);
}
