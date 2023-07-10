/*
 * File - 2-append_text_to_file.c
 */

#include "main.h"

/**
 * append_text_to - appends text at the end of a file.
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success
 *	-1 o failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fwr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	fwr = write(fd, text_content, length);

	if (fd == -1 || fwr == -1)
		return (-1);

	close(fd);

	return (1);
}
