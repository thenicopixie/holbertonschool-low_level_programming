#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a doubly
 * linked list
 * @head: double pointer to doubly linked list
 * @n: integer value to assign n in the new node
 * Return: the address of the new node, of NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(*head));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!(*head))
	{
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp)
	{
		if (!temp->next)
		{
			new_node->next = NULL;
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	return (new_node);
}
