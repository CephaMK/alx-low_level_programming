/*
 * File - 7-leet.c
 */

#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @s: string in question
 *
 * Return: encoded string's pointer
 */
char *leet(char *s)
{
	int m1, m2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[m1])
	{
		for (m2 = 0; m2 <= 7; m2++)
		{
			if (s[m1] == leet[m2] ||
				s[m1] - 32 == leet[m2])
				s[m1] = m2 + '0';
		}

		m1++;
	}

	return (s);
}
