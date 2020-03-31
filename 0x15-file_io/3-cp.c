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
	int file_from, file_to, readvalue, ret;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]),
		exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	readvalue = read(file_from, buffer, BUFFER_SIZE);
	if (readvalue == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	while (readvalue != 0)
	{
		ret = write(file_to, buffer, readvalue);
		if (ret == -1)
			dprintf(STDERR_FILENO, " Error: Can't write to %s\n", argv[2]),
			exit(99);
		readvalue = read(file_from, buffer, BUFFER_SIZE);
		if (readvalue  == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	file_from = close(file_from);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from),
		exit(100);
	file_to = close(file_to);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to),
		exit(100);
	return (0);
}
