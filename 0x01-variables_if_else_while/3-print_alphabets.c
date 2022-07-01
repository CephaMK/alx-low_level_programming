#include <stdio.h>

/*main function prints the lowercase then uppercase*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
		putchar('\n');


	return (0); /*return value is 0 if main is successful*/
}

