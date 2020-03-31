#include "holberton.h"

#define BUFFER_SIZE 1024

/**
 * main - copy the content from a file to another
 * @argc: number of arguments given
 * @argv: arguments given
 *
 * Return: 0 on success, Error on failure
 */

int main(int argc, char **argv)
{
	int file_from, file_to, fr, fw;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]),
		exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	fr = read(file_from, buffer, BUFFER_SIZE);
	if (fr  == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	while (fr != 0)
	{
		fw = write(file_to, buffer, fr);
		if (fw != fr | fw == -1)
			dprintf(STDERR_FILENO, " Error: Can't write to %s\n", argv[2]),
			exit(99);
		fr = read(file_from, buffer, BUFFER_SIZE);
		if (fr  == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	fw = close(file_from);
	if (fw < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from),
		exit(100);
	fw = close(file_to);
	if (fw < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to),
		exit(100);
	return (0);
}
