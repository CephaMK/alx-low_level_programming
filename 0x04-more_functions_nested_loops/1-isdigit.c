/*
 * File 1-isdigit.c
 */

#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: character in question
 *
 * Return: 1 if digit
 *	0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
