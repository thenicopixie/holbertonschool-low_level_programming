#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of a list
 * @head: pointer to a pointer to a struct
 * @n: number
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp;

	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);
	if (!*head)
		*head = new_end;
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_end;
	new_end->n = n;
	new_end->next = NULL;
	return (new_end);
}
