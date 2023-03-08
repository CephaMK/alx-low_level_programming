/*
 * File  - _putchar.c
 */

#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: caracter o be printed
 *
 * Return: 1  on success
 * -1 on error and the error is fixed
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
