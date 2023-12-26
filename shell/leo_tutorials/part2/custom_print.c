#include "shell.h"
/**
 * my_print - Custom printf function
 *
 * @text: Input given by user
 * Return: void
 */
void my_print(const char *text)
{
	write(STDOUT_FILENO, &text, strlen(text));
}
