#include "lists.h"

/**
 * sum_dlistint - function that returns sum of all data in a doubly
 * linked list
 * @head: pointer to a doubly linked list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
