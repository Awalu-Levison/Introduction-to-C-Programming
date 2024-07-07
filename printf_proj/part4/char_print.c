#include "main.h"
/**
 *  * char_print - Printing a character at a time
 *   * @z: The character passed to the function
 *    * Return: Number of characters printed
 *     */
int char_print(int z)
{
		return (write(1, &z, 1));
}
