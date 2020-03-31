#include "holberton.h"

/**
 * append_text_to_file - function that appends text at EOF
 * @filename: name of the file
 * @text_content: the null terminated string to add at the EOF
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
		while (text_content[i] != '\0')
			i++;
		fw = write(fd, text_content, i);
	if (fw == -1)
		return (-1);
	return (1);
}
