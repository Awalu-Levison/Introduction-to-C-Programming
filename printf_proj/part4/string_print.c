#include "main.h"
/**
 *  * str_print - Print string given by user
 *   * @mystr: String passed to the function
 *    * Return: Number of characters printed
 *     */
int string_print(char *mystr)
{
		int counter;

			counter	= 0;

				if (mystr == NULL)
							return (-1);
					else
							{
										counter += write(1, mystr, _strlen(mystr));
											}
						return (counter);
}
