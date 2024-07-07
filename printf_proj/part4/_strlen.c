#include "main.h"
/**
 *  * _strlen - Find length of a string
 *   * @mystr: The string passed to the function
 *    * Return: Length of string
 *     */
int _strlen(char *mystr)
{
		int counter = 0;

			while (*mystr != '\0')
					{
								counter++;
										mystr++;
											}
				return (counter);
}
