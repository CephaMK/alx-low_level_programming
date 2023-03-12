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
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
