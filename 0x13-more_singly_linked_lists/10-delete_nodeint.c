/*
 * File - 10-delete_nodeint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * of listint_t list
 * @head: list head's pointer
 * @index: positin to delete node
 *
 * Return: 1 on success -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del1, *del2;
	unsigned int mk = 0;

	if (*head == NULL)
		return (-1);

	del1 = *head;

	if (index == 0)
	{
		*head = del1->next;
		free(del1);
		return (1);
	}

	while (mk < (index - 1) && del1 != NULL)
	{
		del1 = del1->next;
		mk++;
	}

	if (mk != (index - 1) || del1->next == NULL)
		return (-1);

	del2 = del1->next;
	del1->next = (del1->next)->next;
	free(del2);

	return (1);
}
