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
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
