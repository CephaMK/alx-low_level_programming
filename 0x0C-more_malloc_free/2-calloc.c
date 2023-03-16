/*
 * File - 2-calloc.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of members
 * @size: size
 *
 * Return: NULL if nmemeb or size is zero
 *	or if _calloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int m = 0, k = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	ptr = malloc(k);

	if (ptr == NULL)
		return (NULL);

	while (m < k)
	{
		ptr[m] = 0;
		m++;
	}

	return (ptr);
}
