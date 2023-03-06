/*
 * File - 4-strpbrk.c
 */

#include "main.h"

/**
 * _strpbrk - searches a string of any set of bytes
 * @s: string in  question
 * @accept: set of bytes to be searched for
 *
 * Return: pointer to matched set if found
 *	0 if set is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
