/*
 * File - 1-list_len.c
 */

#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns te number of elements in a linked list
 * @h: te linked list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
