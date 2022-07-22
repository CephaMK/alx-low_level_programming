/*
 * File 2-strncpy.c
 */

#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: bytes of src
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t x = n;

	return (strncpy(dest, src, x));
}
