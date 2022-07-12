/*
 * File 5-rev_string.c
 */

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: dtring in question
 */
void rev_string(char *s)
{
	int rs = 0, index = 0;
	char ts;

	while (s[index++])
		rs++;

	for (index = rs - 1; index >= rs / 2; index--)
	{
		ts = s[index];
		s[index] = s[rs - index - 1];
		s[rs - index - 1] = ts;
	}
}
