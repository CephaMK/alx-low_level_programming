/*
 * File - 3-array_range.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *m, k = 0;

	if (min > max)
		return (NULL);

	m = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (m == NULL)
		return (NULL);

	while (min <= max)
	{
		m[k] = min;
		k++;
		min++;
	}

	return (m);
}
