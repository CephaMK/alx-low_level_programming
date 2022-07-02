#include <stdio.h>

/**
 * main - prints all possible different combinations of digits
 *
 * return: always 0
 */
int main(void)
{
	int _5, _4, _3;

	for (_5 = 0; _5 < 10; _5++)
	{
		for (_4 = 0; _4 < 10; _4++)
		{
			for (_3 = 0; _3 < 10; _3++)
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



