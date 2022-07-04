/*
 * File 101-print_comb4.c
 */

#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits,
 *	in ascending order separated by a comma followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	int _5, _4, _3;

	for (_5 = 0; _5 < 8; _5++)
	{
		for (_4 = _5 + 1; _4 < 9; _4++)
		{
			for (_3 = _4 + 1; _3 < 10; _3++)
			{
				putchar((_5 % 10) + '0');
				putchar((_4 % 10) + '0');
				putchar((_3 % 10) + '0');


					if (_5 == 7 && _4 == 8 && _3 == 9)
						continue;

					putchar(',');
					putchar(' ');
			}

		}

	}
			putchar('\n');

			return (0);
}



