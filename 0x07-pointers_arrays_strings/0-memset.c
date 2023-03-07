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
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
