#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: double pointer to struct
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head)
		return (0);
	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);
	return (num);
}
