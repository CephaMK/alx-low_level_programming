/*
 * File - 2-strlen.c
 */

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string in question
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
