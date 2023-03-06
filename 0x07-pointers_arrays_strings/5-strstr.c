/*
 * File - 5-strstr.c
 */

#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring in question
 * @haystack: string to be searched
 *
 * Return: pointer to located substring
 * 0 if substring isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
