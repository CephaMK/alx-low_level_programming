/*
 * File - 1-listint_len.c
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements a linked listint_t list
 * @h: points to struct
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
