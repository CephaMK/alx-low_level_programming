/*
 * File 0-strcat.c
 */

#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates src string onto end of dest string
 * @dest: first string
 * @src: second string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
