#include <stdio.h>

/**
 * main -prints all single digit numbers odf base 10 starting from 0
 *
 * return always 0
 */
int main(void)
{
	int _5;

	for (_5 = 0; _5 < 10; _5++)
		putchar((_5 % 10) +'0');

	putchar('\n');

	return (0);
}

