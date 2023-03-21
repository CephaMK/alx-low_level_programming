/*
 * File - 5-free_dog.c
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: dog in question
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->owner);
	free(d->name);
	free(d);
}
