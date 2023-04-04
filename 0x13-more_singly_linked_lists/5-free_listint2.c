/*
 * File - 5-free_listint2.c
 */


#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *del;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
	}
}
