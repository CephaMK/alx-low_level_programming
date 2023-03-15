/*
 * File - 0-create_array.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of characters and
 *	initiates it with a specific character
 * @size: number of characters in array
 * @c: specific character to be initialized
 *
 * Return: array of charcters
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
