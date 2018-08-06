#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: double pointer to a struct
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp_head;

	temp_head = *head;
	while (temp_head)
	{
		temp = temp_head->next;
		free(temp_head);
		temp_head = temp;
	}
	*head = NULL;
}
