#include "lists.h"

/**
 * insert_dnodeint_at_index -function that inserts a new node at index n
 * @h: double pointer to doubly linked list
 * @idx: index of new node
 * @n: integer data in new node
 * Return: address of new node or NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(*h));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!idx)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	temp = *h;

	while (i < idx - 1)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
