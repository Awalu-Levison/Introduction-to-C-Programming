#include "main.h"
/**
 *  * length_str - Find length of a string
 *   * @mystr: The string passed to the function
 *    * Return: Length of string
 *     */
int length_str(char *mystr)
{
		int len = 0;

			while (mystr[len] != '\0')
					{
								len++;
									}
				return (len);
}
