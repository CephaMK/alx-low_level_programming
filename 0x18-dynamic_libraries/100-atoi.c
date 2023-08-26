/*
 * File - 100-atoi.c
 */

#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: The pointer to convert
 *
 * Return: a integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int mk = 0;
	int min = 1;
	int ck = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			ck = 1;
			mk = (mk * 10) + (s[c] - '0');
			c++;
		}

		if (ck == 1)
		{
			break;
		}

		c++;
	}

	mk *= min;
	return (mk);
}
