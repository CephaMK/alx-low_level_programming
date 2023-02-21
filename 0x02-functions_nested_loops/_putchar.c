/*
 * File : _putchar.c
 */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: 1 upon success
 *	-1 is returned on error and error is set appropriatley.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
