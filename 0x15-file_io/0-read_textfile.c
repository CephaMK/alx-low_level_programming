/*
 * File - 0-read_textfile.c
 */

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: num of letters to read
 *
 * Return: 0 on error
 * Otherwise: Num of letters read and writtten
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int fd, frd, fwr;

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == 0)
		return (0);

	frd = read(fd, str, letters);
	fwr = write(STDOUT_FILENO, str, frd);

	if (fd == -1 || frd == -1 || fwr == -1 || fwr != frd)
	{
		free(str);
		return (0);
	}
	free(str);
	close(fd);

	return (fwr);
}
