/*
 * File 1-main.c
 */

#include "main.h"
#include <stdio.h>

/**
 * main - calls out function
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
