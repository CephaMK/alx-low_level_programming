/*
 * File - 0-memset.c
 */

#include "main.h"
#include <strings.h>

/**
 * *_memset - fills the memory with constant byte
 * @n:number of bytes of memory area
 * @b:constant byte
 * @s: pointerto n
 *
 * Return: pointer to memory address of s.
 */
void *_memset(void *s, int b, size_t n))
{
	unsigned int i;
	unsigned char *mem = s, val = b;

	for (i = 0; i < n; i++)
		mem[i] = val;

	return (mem);
}
