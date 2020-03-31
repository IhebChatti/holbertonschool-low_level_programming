#include "holberton.h"

/**
 * read_textfile - function to read a text file
 * @filename: the file to read
 * @letters: nbytes
 * Return: Number of letters on success, -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fr, fw;
	FILE *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(letters);
	if (temp == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	fr = read(fd, temp, letters);
	fw = write(1, temp, fr);
	if (fw < 0 || fd == -1)
		return (0);
	close(fd);
	free(temp);
	return (fr);
}
