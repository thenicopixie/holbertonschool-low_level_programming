#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node from a
 * doubly linked list at a given index
 * @head: double pointer to a doubly linked list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next_node;

	if (!*head)
		return (-1);
	current = *head;
	next_node = *head;
	if (!index)
	{
		current = current->next;
		if (current)
			current->prev = NULL;
		free(*head);
		*head = current;
		return (1);
	}
	while (index)
	{
		if (!current)
			return (-1);
		current = current->next;
		index--;
	}
	next_node = current->next;
	current->prev->next = next_node;
	if (next_node)
		next_node->prev = current->prev;
	free(current);
	return (1);
}
