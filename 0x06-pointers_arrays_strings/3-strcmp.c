/*
 * File 3-strcmp.c
 */

#include "main.h"
#include <string.h>

/**
 * _strcmp -  compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if same
 *	15 if s1 > s2
 *	-15 is s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
		return (-15);

	else if (s1 > s2)
		return (15);

	else
	{
		return (0);
	}
}
