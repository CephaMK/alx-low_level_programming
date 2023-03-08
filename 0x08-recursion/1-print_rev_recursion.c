/*
 * File - 1-print_rev_recursion.c
 */

#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string in question
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
