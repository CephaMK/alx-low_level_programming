/*
 * File - 3-alloc_grid.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2D array of integers
 * @width: int on row
 * @height: int on column
 *
 * Return: NULL on failure
 * Otherwise pointer to a 2D array on integers
 */
int **alloc_grid(int width, int height)
{
	int **TWOD;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	TWOD = malloc(sizeof(int) * height);

	if (TWOD == NULL)
		return (NULL);

	for (hi = 0; hi < height; hi++)
	{
		TWOD[hi] = malloc(sizeof(int) * width);

		if (TWOD[hi] == NULL)
		{
			for (hi = 0; hi > 0; hi--)
				free(TWOD[hi]);

			free(TWOD);
			return (NULL);
		}
	}

	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
			TWOD[hi][wi] = 0;
	}

	return (TWOD);
}
