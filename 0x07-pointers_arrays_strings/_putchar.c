/*
 * File _putchar.c
 */

#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: 1 on success
 *	-1 on error and the error is fixed
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
