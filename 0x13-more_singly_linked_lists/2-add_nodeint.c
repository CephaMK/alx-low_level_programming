/*
 * File - 2-add_nodeint.c
 */

#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at begining of listint_t list
 * @head: points to struct
 * @n: int
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *future;

	future = malloc(sizeof(listint_t));

	if (future == NULL)
		return (NULL);

	future->n = n;
	future->next = *head;
	*head = future;

	return (future);
}
