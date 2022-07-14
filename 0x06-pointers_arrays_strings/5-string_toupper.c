/*
 * File 5-string_toupper.c
 */

#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * 
 * Return: uppercase letters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[1] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
