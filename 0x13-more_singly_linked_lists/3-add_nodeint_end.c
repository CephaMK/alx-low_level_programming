/*
 * File - 3-add_nodeint_end.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node to end of listint_t list
 * @head: pointer to head node
 * @n: int
 *
 * Return: address of new element
 * NULL upon failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *present;
	listint_t *future;

	present = *head;

	while (present != NULL && present->next != NULL)
		present = present->next;

	future = malloc(sizeof(listint_t));
	if (present == NULL)
		return (NULL);

	if (present)
		present->next = future;
	else
		*head = future;

	return (future);

}
