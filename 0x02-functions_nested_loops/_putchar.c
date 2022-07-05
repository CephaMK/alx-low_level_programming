#include <unistd.h>

/**
 *_putchar - writes the character to stdout
 * @c: The charcter top print
 *
 *Return: on success 1
 *on error -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
