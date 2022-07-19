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
 * Return: constant byte
 */
void *_memset(void *s, int b, size_t n)
{
	unsigned int i;
	unsigned char *mem = s, val = b;

	for (i = 0; i < n; i++)
		mem[i] = val;

	return (mem);

}
