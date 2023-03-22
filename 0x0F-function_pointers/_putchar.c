/*
 * File - putchar.c
 */

#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * @c: character to be written
 *
 * Return: 1 on success
 * -1 on error and error is rectified
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
