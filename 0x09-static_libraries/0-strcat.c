/*
 * File - 0-strcat.c
 */

#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 *  appends the src string to the dest string, overwriting the
 *  terminating null byte (\0) at the end of dest,
 *  and then adds a terminating null byte
 *  @dest: first string
 *  @src: second string
 *
 *  Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len_d = 0;

	while (dest[i++])
		len_d++;

	for (i = 0; src[i]; i++)
		dest[len_d++] = src[i];

	return (dest);
}
