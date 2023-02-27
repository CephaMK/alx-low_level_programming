/*
 * File 9-strcpy.c
 */

#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (src[m])
	{
		dest[m] = src[m];
		dest++;
	}

	return (dest);
}
