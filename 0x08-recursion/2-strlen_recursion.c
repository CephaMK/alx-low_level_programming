/*
 * File - 2-strlen_recursion.c
 */

#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string in question
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = strlen(s);

	if (*s)
	{
		_strlen_recursion(s + 1);
	}

	return (i);
}
