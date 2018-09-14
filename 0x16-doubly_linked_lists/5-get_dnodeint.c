#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node of a doubly
 * linked list
 * @head: pointer to doubly linked list
 * @index: index of node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (!head)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
