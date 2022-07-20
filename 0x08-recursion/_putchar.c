/*
 * File _putchar.c
 */

#include <unistd.h>

/**
 * _putchar - prints character c
 * @c: character to be printed
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
