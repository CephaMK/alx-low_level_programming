/*
 * File 0-isupper.c
 */

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character in question
 *
 * Return: 1 if uppercase
 *	0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
