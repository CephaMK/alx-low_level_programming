/*
 * File - 4-free_listint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *del;

	while (head != NULL)
	{
		del = head;
		head = head->next;
		free(del);
	}
}
