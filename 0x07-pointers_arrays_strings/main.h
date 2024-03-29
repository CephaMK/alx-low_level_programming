#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
