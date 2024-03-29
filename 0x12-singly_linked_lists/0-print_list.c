/*
 * File - 0-print_list.c
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: the list_t list
 *
 * Return: number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}

	return (num);
}
