/*
 * File - 1-strdup.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer to newly allocated space in memory
 * which contains a copy of the string in the given parameter
 * @str: string in question
 *
 * Return: On success pointer to duplicated string.
 * NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *copy;
	int m, k = 0;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		k++;

	copy = malloc(sizeof(char) * k + 1);

	if (copy == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		copy[m] = str[m];

	copy[k] = '\0';

	return (copy);
}
