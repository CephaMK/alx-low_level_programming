#include <stdio.h>

/*
 * main function is void
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
		putchar('\n');
	}
	return (0);
}
