#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: double pointer to a struct
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head)
		return;
	temp = *head;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
