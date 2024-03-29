/*
 * File - 5-string_toupper.c
 */

#include "main.h"

/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase.
 * @str: string in question
 * Return: uppercase letters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
