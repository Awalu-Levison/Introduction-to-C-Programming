#include "main.h"
/**
 *  include "main.h"
 */**
 * *_memcpy - A function that copies memory area
 *  * @dest: Destination variable that receives bytes from src
 *   * @src: The source of bytes to be used
 *    * @n: Available number of bytes
 *     * Return: Destination bytes
 *      */
 char *_memcpy(char *dest, char *src, unsigned int n)
{
	        int y = 0;

		        int v = n;

			        for (; y < v; y++)
					        {
							                dest[y] = src[y]
										                n--;
									        }
				        return (dest);
}
