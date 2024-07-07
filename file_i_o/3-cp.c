#include "main.h"
void checker(int fd, int state, char *filename, char mode);
/**
 * checker - Checking if file can be opened or closed
 * @fd: File descriptor
 * @filename: Pointer to the actual name
 * @mode: The file access mode
 * @state: The state of the file
 */
void checker(int fd, int state, char *filename, char mode)
{
	if (mode == 'C' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'w' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

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
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	checker(src, -1, argv[1], 'O');

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	checker(dest, -1, argv[2], 'W');

	while (n == 1024)
	{
		n = read(src, buffer, 1024);
		if (n == -1)
			checker(-1, -1, argv[1], 'O');
		file_write = write(dest, buffer, n);
		if (file_write == -1)
			checker(-1, -1, argv[2], 'W');
		if (file_write != n)
			file_write = -1;
		checker(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	checker(close_src, src, NULL, 'C');
	close_dest = close(dest);
	checker(close_dest, dest, NULL, 'C');
	return (0);
}
