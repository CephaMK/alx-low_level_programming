/*
 * File - 3-strspn.c
 */

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string in question
 * @accept: prefix to be measured
 *
 * Return: number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byt++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byt);
		}

		s++;
	}

	return (byt);
}
