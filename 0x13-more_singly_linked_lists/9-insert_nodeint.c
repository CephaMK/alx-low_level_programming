/*
 * File - 9-insert_nodeint.c
 */

#include "lists.h"
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - inserts a new noe at a given position
 * @head: head pointer to listint_t list
 * @idx: index of list
 * @n: int
 *
 * Return: address of new node
 * NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *present;
	listint_t *ftr;

	if (head == NULL)
		return (NULL);

	present = *head;
	for (num = 1; present && num < idx; num++)
	{
		present = present->next;
		if (present == NULL)
			return (NULL);
	}

	ftr = malloc(sizeof(listint_t));
	if (ftr == NULL)
	{
		free(ftr);
		return (NULL);
	}
	ftr->n = n;

	if (idx == 0)
	{
		*head = ftr;
		ftr->next = present;
	}
	else if (present->next)
	{
		ftr->next = present->next;
		present->next = ftr;
	}
	else
	{
		ftr->next = NULL;
		present->next = ftr;
	}

	return (ftr);
}
