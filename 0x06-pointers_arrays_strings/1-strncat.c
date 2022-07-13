/*
 * File 1-strncat.c
 */

#include "main.h"
#include <string.h>

/**
 * _strncat - concatanates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return: concatanated string
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t x = n;

	return (strncat(dest, src, x));
}
