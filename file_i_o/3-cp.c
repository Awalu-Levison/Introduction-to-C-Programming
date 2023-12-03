#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
void checker(int src, int dest, char *argv[]);
/**
 * checker - A function that Checks for errors on file
 * @src: The source file
 * @dest: The destination file
 * @argv: Arguments passed to the function
 * Return: nothing
 */
void checker(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Copying content between two files
 * @argc: Counting the number of arguments
 * @argv: The actual arguments passed to the function
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int src, dest, closer;
	ssize_t n_char, n_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checker(src, dest, argv);

	n_char = 1024;
	while (n_char == 1024)
	{
		n_char = read(src, buffer, 1024);
		if (n_char == -1)
			checker(-1, 0, argv);
		n_write = write(dest, buffer, 1024);
		if (n_write == -1)
			checker(0, -1, argv);
	}

	closer = close(src);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	closer = close(dest);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}

	return (0);
}
