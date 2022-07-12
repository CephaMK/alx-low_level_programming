/*
 * File 0-main.c
 */

#include "main.h"
#include <stdio.h>

/**
 * main - print the old and new value of n
 *
 * Return:always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
