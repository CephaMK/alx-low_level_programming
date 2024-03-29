/*
 * File - 2-strchr.c
 */

#include "main.h"

/**
 *  *_strchr - locates a character in a string
 *  @s: string in question
 *  @c: character in question
 *
 *  Return: 0 if character isn't found
 *  if found located character
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
