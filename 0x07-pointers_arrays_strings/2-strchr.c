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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
