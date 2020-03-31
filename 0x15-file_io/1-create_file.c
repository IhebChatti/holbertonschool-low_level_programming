#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: the file to be created & written
 * @text_content: the content of the file
 * Return: 1 on Success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		i++;
		fw = write(fd, text_content, i);
	}
	if (fw == -1)
		return (-1);
	return (1);
}
