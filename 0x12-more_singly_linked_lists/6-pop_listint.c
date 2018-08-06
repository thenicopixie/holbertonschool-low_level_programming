#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: double pointer to struct
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next_temp = temp->next;
	int num = temp->n;

	if (!temp)
		return (0);
	free(temp);
	*head = next_temp;
	return (num);
}
