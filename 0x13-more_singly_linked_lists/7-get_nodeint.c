/*
 * File - 7-get_nodeint.c
 */

#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of
 * a listint_t linked list.
 * @head: head pointer
 * @index: position of nth node
 *
 * Return: NULL if node doesn't exist
 * address to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;
	listint_t *present;

	present = head;
	num = 0;
	while (num < index)
	{
		if (present)
			present = present->next;
		else
			return (NULL);
		num++;
	}

	if (present)
		return (present);
	else
		return (NULL);
}
