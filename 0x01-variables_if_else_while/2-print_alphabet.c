#include <stdio.h>

/*
 * main function is void
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);

		putchar('\n');
	}
	return (0);
}
