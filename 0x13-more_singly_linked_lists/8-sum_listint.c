/*
 * File - 8-sum_listint.c
 */

#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n) of
 * listint_t linked list
 * @head: head's pointer
 *
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int ans = 0;

	while (head)
	{
		ans = ans + head->n;
		head = head->next;
	}

	return (ans);
}
