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
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}

			b++;
		}

		a++;
	}

	return (c);
}
