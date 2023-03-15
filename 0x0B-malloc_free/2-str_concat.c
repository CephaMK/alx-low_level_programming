/*
 * File - 2-str_concat.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: concatenated string
 *	NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cc_str;
	int i, concat_i = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	cc_str = malloc(sizeof(char) * length);

	if (cc_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		cc_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		cc_str[concat_i++] = s2[i];

	return (cc_str);
}
