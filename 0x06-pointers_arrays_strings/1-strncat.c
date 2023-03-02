/*
 * File - 1-strncat.c
 */

#include "main.h"

/**
 * *_strncat -  concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len_d = 0;

	while (dest[i++])
		len_d++;

	for (i = 0; src[i] && i < n; i++)
		dest[len_d++] = src[i];

	return (dest);
}
