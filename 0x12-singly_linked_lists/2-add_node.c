/*
 * File - 2-add_node.c
 */

#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the begining
 *	of a list_t list
 * @head: pointer to list_t list
 * @str: string to be added to list_t list
 *
 * Return: NULL on failure
 *	Otherwise: address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *clone;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	clone = strdup(str);
	if (clone == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = clone;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
