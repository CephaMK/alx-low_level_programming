/*
 * File 2-strncpy.c
 */

#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
