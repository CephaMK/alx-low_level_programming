#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 *
 * return: always 0
 */
int main(void)
{
	int _1, _2;

	for (_1 = 0; _1 <= 98; _1++)
	{
		for (_2 = _1 + 1; _2 <= 99; _2++)
		{
			putchar((_1 / 10) + '0');
			putchar((_1 % 10) + '0');
			putchar(' ');
			putchar((_2 / 10) + '0');
			putchar((_2 % 10) + '0');

			if (_1 == 98 && _2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
