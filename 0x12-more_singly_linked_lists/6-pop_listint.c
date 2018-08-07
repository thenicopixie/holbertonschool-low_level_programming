#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: double pointer to struct
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num = (*head)->n;
	if (!*head)
		return (0);
	*head = temp->next;
	free(temp);
	return (num);
}
