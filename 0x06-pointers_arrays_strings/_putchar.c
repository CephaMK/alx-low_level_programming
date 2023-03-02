/*
 * File _putchar.c
 */

#include <unistd.h>

/**
 * _putchar - prints character to standard output
 * @c: character to be printed
 *
 * Return: 1 upon success
 * -1 on error and error ifs rectified.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
