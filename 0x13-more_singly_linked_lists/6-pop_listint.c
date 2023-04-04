/*
 * File - 6-pop_listint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delets the head node of a
 * listint_t linked list
 * @head: haed ode of list
 *
 * Return: 0 if linked list is empty
 * else head node's data
 */
int pop_listint(listint_t **head)
{
	int cnt;
	listint_t *del;

	if (*head == NULL)
		return (0);

	del = *head;
	cnt = del->n;
	*head = del->next;
	free(del);

	return (cnt);
}
