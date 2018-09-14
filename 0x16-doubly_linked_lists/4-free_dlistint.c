#include "lists.h"

/**
 * free_dlistint - function to free doubly linked list
 * @head: pointer to doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
