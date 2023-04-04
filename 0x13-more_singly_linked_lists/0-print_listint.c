/*
 * File - 0-print_listint.c
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to struct
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
