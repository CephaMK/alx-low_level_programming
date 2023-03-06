/*
 * File - 1-memcpy.c
 */

#include <stdio.h>
#include <stddef.h>

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @n: bytes to be copied
 * @src: memory area with n bytes
 * @dest: destination to copy n bytes
 *
 * Return: pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *d = dest;
	const unsigned char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];

	return (dest);
}
