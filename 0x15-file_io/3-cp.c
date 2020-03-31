#include "holberton.h"

#define BUFFERSIZE 1024

/**
 * main - copy the content from a file to another
 * @argc: number of arguments given
 * @argv: arguments given
 *
 * Return: EXIT_SUCCESS on success, Error on failure 
 */

int main(int argc, char **argv)
{
	int file_from, file_to, fr, fw;
	char buff[BUFFERSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}
	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	fr = read(file_from, buff, BUFFERSIZE);
	fw = write(file_to, buff, fr);
	fw = close(file_from);
	if (fw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	fw = close(file_to);
	if (fw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (EXIT_SUCCESS);
}
