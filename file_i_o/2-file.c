#include "main.h"
/**
 * main - A program that copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: The actua; args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int src, dest, close_dest, close_src, file_write, n = 1024;

	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		return (0);

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (dest == -1)
		return (0);

	while (n == 1024)
	{
		n = read(src, buffer, sizeof(buffer));
		if (n == -1)
			dprintf("%s", "Error: Can't read from file\n");
		exit(98);

		file_write = write(dest, buffer, n);
		if (file_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to\n", "%s");
		exit(99);
	}
	close_src = close(src);
	if (close_src == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n", close_src);

	close_dest = close(dest);
	if (close_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n", close_dest);
	return (0);
}
