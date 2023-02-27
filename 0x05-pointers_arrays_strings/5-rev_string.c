/*
 * File - 5-rev_string.c
 */

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int str_rev = 0, str = 0;
	char rev;

	while (s[str++])
		str_rev++;

	for (str = str_rev - 1; str >= str_rev / 2; str--)
	{
		rev = s[str];
		s[rev] = s[str_rev - str - 1];
		s[str_rev - str - 1] = rev;
	}
}
