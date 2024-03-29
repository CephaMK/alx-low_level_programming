/*
 * File - 1-create_file.c
 */

#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of gfile to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 *	-1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, fd, fwr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fwr = write(fd, text_content, len);

	if (fd == -1 || fwr == -1)
		return (-1);

	close(fd);

	return (1);
}
