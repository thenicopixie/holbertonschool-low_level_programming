#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: double pointer to struct
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num = temp->n;
	if (!*head)
		return (0);
	free(*head);
	*head = temp->next;
	return (num);
}
