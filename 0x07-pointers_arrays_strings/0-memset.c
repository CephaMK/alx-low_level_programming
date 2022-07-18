/*
 * File 0-memset.c
 */

#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: numbers of bytes of memory area
 *
 * return: constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int n = size_t n;
	char *mem = s, val = b;

	for (i = 0; i < n; i++)
		mem[i] = val;
	
	return (mem);

}
