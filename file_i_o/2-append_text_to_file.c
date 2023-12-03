#include "main.h"
/**
 * append_text_to_file - A function to append text to a file
 * @filename: Pointer to the actual file
 * @text_content: The content of a file
 * Return: 1 on success or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdp;
	int n;
	int i; /*rwr*/

	if (!filename)
		return (-1);
	fdp = open(filename, O_WRONLY | O_APPEND);
	if (fdp == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;
		i = write(fdp, text_content, n);
		if (i == -1)
			return (-1);
	}
	closse(fdp);
	return (1);
}
