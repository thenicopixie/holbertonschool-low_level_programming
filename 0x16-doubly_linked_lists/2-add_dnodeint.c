#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a doubly
 * linked list
 * @head: double pointer to doubly linked list
 * @n: integer value to assign to new node
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(*head) * 8);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
