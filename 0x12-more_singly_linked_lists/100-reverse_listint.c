#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: double pointer to struct
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	prev = NULL;
	curr = NULL;

	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;
	return (*head);
}
